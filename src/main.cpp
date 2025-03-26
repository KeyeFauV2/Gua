#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <memory>
#include <vector>
#include <any>
#include "antlr4-runtime.h"
#include "GuaLexer.h"
#include "GuaParser.h"
#include "GuaBaseVisitor.h"

using namespace antlr4;

// Structures pour représenter les classes et objets
struct Function {
    std::string name;
    std::vector<std::string> params;
    GuaParser::BlockContext* body;
};

struct Class {
    std::string name;
    std::string baseClass;
    std::vector<std::string> interfaces;
    std::unordered_map<std::string, Function> methods;
    std::vector<std::string> members;
};

struct Interface {
    std::string name;
    std::vector<Function> functions;
};

struct ObjectInstance {
    std::string className;
    std::unordered_map<std::string, std::any> properties; // Utiliser std::any pour les propriétés
};

class GuaInterpreterVisitor : public GuaBaseVisitor {
public:
    // Tables des symboles
    std::unordered_map<std::string, std::any> symbolTable; // Variables globales
    std::unordered_map<std::string, Class> classes;
    std::unordered_map<std::string, Interface> interfaces;
    std::unordered_map<std::string, ObjectInstance> objects;

    // Variable pour gérer le contexte de l'objet courant
    ObjectInstance* currentObject = nullptr;

    // Override pour les déclarations de classes
    virtual std::any visitClassDecl(GuaParser::ClassDeclContext *ctx) override {
        std::string className = ctx->IDENTIFIER(0)->getText();
        std::cout << "[Debug] Defining class: " << className << std::endl;

        Class newClass;
        newClass.name = className;

        // Vérifier s'il y a une classe de base
        if (ctx->IDENTIFIER().size() > 1) {
            std::string baseClass = ctx->IDENTIFIER(1)->getText();
            newClass.baseClass = baseClass;
            std::cout << "[Debug] Class " << className << " inherits from " << baseClass << std::endl;
        }

        // Gérer les interfaces implémentées
        for (size_t i = 2; i < ctx->IDENTIFIER().size(); ++i) {
            std::string interfaceName = ctx->IDENTIFIER(i)->getText();
            newClass.interfaces.push_back(interfaceName);
            std::cout << "[Debug] Class " << className << " implements " << interfaceName << std::endl;
        }

        // Parcourir le corps de la classe
        for (auto child : ctx->classBody()->children) {
            if (auto funcDecl = dynamic_cast<GuaParser::FunctionDeclContext*>(child)) {
                // Gérer les déclarations de fonction
                Function func;
                func.name = funcDecl->IDENTIFIER()->getText();
                if (funcDecl->paramList()) {
                    for (auto param : funcDecl->paramList()->IDENTIFIER()) {
                        func.params.push_back(param->getText());
                    }
                }
                func.body = funcDecl->block();
                newClass.methods[func.name] = func;
                std::cout << "[Debug] Class " << className << " has method: " << func.name << std::endl;
            }
            else if (auto constructorDecl = dynamic_cast<GuaParser::ConstructorDeclContext*>(child)) {
                // Gérer les constructeurs
                Function constructor;
                constructor.name = "constructor";
                if (constructorDecl->paramList()) {
                    for (auto param : constructorDecl->paramList()->IDENTIFIER()) {
                        constructor.params.push_back(param->getText());
                    }
                }
                constructor.body = constructorDecl->block();
                newClass.methods[constructor.name] = constructor;
                std::cout << "[Debug] Class " << className << " has constructor." << std::endl;
            }
            // Ajouter ici la gestion des destructeurs et implémentations d'interfaces
        }

        classes[className] = newClass;
        return std::any();
    }

    // Override pour l'instanciation des objets avec 'new'
    virtual std::any visitNewExpr(GuaParser::NewExprContext *ctx) override {
        std::string className = ctx->IDENTIFIER()->getText();
        std::cout << "[Debug] Instantiating class: " << className << std::endl;

        if (classes.find(className) == classes.end()) {
            std::cerr << "Erreur: Classe '" << className << "' non définie." << std::endl;
            return std::any();
        }

        // Générer un nom unique pour l'objet
        std::string objName = className + "_" + std::to_string(objects.size() + 1);
        ObjectInstance newObj;
        newObj.className = className;
        objects[objName] = newObj;

        // Appeler le constructeur si défini
        Class& cls = classes[className];
        if (cls.methods.find("constructor") != cls.methods.end()) {
            Function& constructor = cls.methods["constructor"];
            // Gérer les arguments si présents (simplifié ici)
            ObjectInstance* previousObject = currentObject;
            currentObject = &objects[objName];
            visit(constructor.body);
            currentObject = previousObject;
        }

        std::cout << "Création d'une instance de " << className << " nommée " << objName << std::endl;
        return objName; // Retourner le nom de l'objet comme identifiant
    }

    // Override pour les appels de méthode membres avec arguments
    virtual std::any visitMemberFunctionCallExpr(GuaParser::MemberFunctionCallExprContext *ctx) override {
        // Exemple: object.method(args)
        std::any objectAny = visit(ctx->expression());
        if (!objectAny.has_value()) {
            std::cerr << "Erreur: Objet invalide." << std::endl;
            return std::any();
        }

        try {
            std::string objectName = std::any_cast<std::string>(objectAny);
            std::string methodName = ctx->IDENTIFIER()->getText();

            std::cout << "[Debug] Appel de la méthode '" << methodName << "' sur l'objet '" << objectName << "'" << std::endl;

            if (objects.find(objectName) == objects.end()) {
                std::cerr << "Erreur: Objet '" << objectName << "' non défini." << std::endl;
                return std::any();
            }

            ObjectInstance& obj = objects[objectName];
            if (classes.find(obj.className) == classes.end()) {
                std::cerr << "Erreur: Classe '" << obj.className << "' non définie." << std::endl;
                return std::any();
            }

            Class& cls = classes[obj.className];
            if (cls.methods.find(methodName) == cls.methods.end()) {
                std::cerr << "Erreur: Méthode '" << methodName << "' non trouvée dans la classe '" << cls.name << "'." << std::endl;
                return std::any();
            }

            Function& func = cls.methods[methodName];
            // Gérer les arguments
            std::vector<std::any> args;
            if (ctx->argList()) {
                for (auto expr : ctx->argList()->expression()) {
                    args.push_back(visit(expr));
                }
            }

            // Créer un nouveau contexte d'exécution pour la méthode
            ObjectInstance* previousObject = currentObject;
            currentObject = &obj;

            // Exécuter le corps de la fonction
            visit(func.body);

            // Restaurer le contexte précédent
            currentObject = previousObject;

            return std::any(); // Simplification, retourner une valeur appropriée si nécessaire
        }
        catch (const std::bad_any_cast& e) {
            std::cerr << "Erreur de conversion Any cast dans visitMemberFunctionCallExpr: " << e.what() << std::endl;
            return std::any();
        }
    }

    // Override pour les accès de propriétés membres
    virtual std::any visitMemberAccessExpr(GuaParser::MemberAccessExprContext *ctx) override {
        // Exemple: object.property
        std::any objectAny = visit(ctx->expression());
        if (!objectAny.has_value()) {
            std::cerr << "Erreur: Objet invalide." << std::endl;
            return std::any();
        }

        try {
            std::string objectName = std::any_cast<std::string>(objectAny);
            std::string propertyName = ctx->IDENTIFIER()->getText();

            std::cout << "[Debug] Accès à la propriété '" << propertyName << "' de l'objet '" << objectName << "'" << std::endl;

            if (objects.find(objectName) == objects.end()) {
                std::cerr << "Erreur: Objet '" << objectName << "' non défini." << std::endl;
                return std::any();
            }

            ObjectInstance& obj = objects[objectName];
            if (obj.properties.find(propertyName) != obj.properties.end()) {
                return obj.properties[propertyName];
            } else {
                std::cerr << "Erreur: Propriété '" << propertyName << "' non définie dans l'objet '" << objectName << "'" << std::endl;
                return std::any();
            }

        } catch (const std::bad_any_cast& e) {
            std::cerr << "Erreur de conversion Any cast dans visitMemberAccessExpr: " << e.what() << std::endl;
            return std::any();
        }
    }

    // Override pour les déclarations d'inclusion
    virtual std::any visitIncludeStmt(GuaParser::IncludeStmtContext *ctx) override {
        std::string includeFile = ctx->STRING()->getText();
        // Supprimer les guillemets
        includeFile = includeFile.substr(1, includeFile.length() - 2);
        std::cout << "[Debug] Inclusion du fichier : " << includeFile << std::endl;

        // Charger et interpréter le fichier inclus
        std::ifstream stream(includeFile);
        if (!stream.is_open()) {
            std::cerr << "Erreur: Impossible d'inclure le fichier '" << includeFile << "'." << std::endl;
            return std::any();
        }

        ANTLRInputStream input(stream);
        GuaLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        GuaParser parser(&tokens);
        GuaParser::ProgramContext* tree = parser.program();

        if (!tree) {
            std::cerr << "Erreur: L'arbre de parsing pour '" << includeFile << "' est null." << std::endl;
            return std::any();
        }

        visit(tree); // Interpréter le fichier inclus
        return std::any();
    }

    // Override pour les déclarations de variables
    virtual std::any visitVarDecl(GuaParser::VarDeclContext *ctx) override {
        std::string varName = ctx->IDENTIFIER()->getText();
        std::cout << "[Debug] Variable Declaration: " << varName << std::endl;

        // Si une expression est présente, l'évaluer
        if (ctx->expression()) {
            std::any exprResult = visit(ctx->expression());
            if (exprResult.type() == typeid(std::string)) {
                // Supposons que c'est un objet
                std::string objName = std::any_cast<std::string>(exprResult);
                symbolTable[varName] = objName;
            }
            else if (exprResult.type() == typeid(int)) {
                int value = std::any_cast<int>(exprResult);
                symbolTable[varName] = value;
            }
            else if (exprResult.type() == typeid(float)) {
                float value = std::any_cast<float>(exprResult);
                symbolTable[varName] = value;
            }
            else if (exprResult.type() == typeid(std::string)) { // Pour les strings
                std::string value = std::any_cast<std::string>(exprResult);
                symbolTable[varName] = value;
            }
            // Ajouter ici la gestion des autres types (bool, etc.)
        }
        else {
            // Initialiser la variable à 0 par défaut
            symbolTable[varName] = 0;
        }

        return std::any();
    }

    // Override pour les appels de fonctions globales (ex. Console.print)
    virtual std::any visitFunctionCallExpr(GuaParser::FunctionCallExprContext *ctx) override {
        std::string funcName = ctx->IDENTIFIER()->getText();
        std::cout << "[Debug] Appel de la fonction: " << funcName << std::endl;

        // Exemple simpliste pour gérer Console.print
        if (funcName == "Console.print") {
            if (ctx->argList() && ctx->argList()->expression().size() == 1) {
                std::any arg = visit(ctx->argList()->expression(0));
                if (arg.type() == typeid(int)) {
                    std::cout << std::any_cast<int>(arg) << std::endl;
                }
                else if (arg.type() == typeid(float)) {
                    std::cout << std::any_cast<float>(arg) << std::endl;
                }
                else if (arg.type() == typeid(std::string)) {
                    std::cout << std::any_cast<std::string>(arg) << std::endl;
                }
                // Ajouter d'autres types si nécessaire
            }
        }

        // TODO: Gérer d'autres appels de fonctions globales

        return std::any(); // Simplification
    }

    // Override pour les expressions d'addition et de soustraction
    virtual std::any visitAddSubExpr(GuaParser::AddSubExprContext *ctx) override {
        std::cout << "[Debug] Evaluation AddSubExpr" << std::endl;
        std::any leftAny = visit(ctx->expression(0));
        std::any rightAny = visit(ctx->expression(1));

        if (leftAny.type() == typeid(int) && rightAny.type() == typeid(int)) {
            int left = std::any_cast<int>(leftAny);
            int right = std::any_cast<int>(rightAny);
            std::string op = ctx->ADD()->getText();

            int result = 0;
            if (op == "+") {
                result = left + right;
            }
            else { // "-"
                result = left - right;
            }

            std::cout << "[Debug] Add/Sub Expr: " << left << " " << op << " " << right << " = " << result << std::endl;
            return result;
        }

        // Ajouter la gestion des autres types si nécessaire
        std::cerr << "Erreur: Types non supportés dans AddSubExpr." << std::endl;
        return std::any();
    }

    // Override pour les expressions d'identifiants
    virtual std::any visitIdExpr(GuaParser::IdExprContext *ctx) override {
        std::string varName = ctx->IDENTIFIER()->getText();
        std::cout << "[Debug] Accès à la variable: " << varName << std::endl;

        if (currentObject != nullptr) {
            // Accès aux propriétés de l'objet
            if (currentObject->properties.find(varName) != currentObject->properties.end()) {
                return currentObject->properties[varName];
            }
        }

        // Accès aux variables globales
        if (symbolTable.find(varName) != symbolTable.end()) {
            return symbolTable[varName];
        }
        else {
            std::cerr << "Erreur: Variable '" << varName << "' non déclarée." << std::endl;
            return std::any();
        }
    }

    // Override pour les expressions d'entiers
    virtual std::any visitIntExpr(GuaParser::IntExprContext *ctx) override {
        int value = std::stoi(ctx->INT()->getText());
        std::cout << "[Debug] Valeur entière: " << value << std::endl;
        return value;
    }

    // Override pour les expressions de flottants
    virtual std::any visitFloatExpr(GuaParser::FloatExprContext *ctx) override {
        float value = std::stof(ctx->FLOAT()->getText());
        std::cout << "[Debug] Valeur flottante: " << value << std::endl;
        return value;
    }

    // Override pour les expressions de chaînes de caractères
    virtual std::any visitStringExpr(GuaParser::StringExprContext *ctx) override {
        std::string value = ctx->STRING()->getText();
        // Supprimer les guillemets
        value = value.substr(1, value.length() - 2);
        std::cout << "[Debug] Valeur String: " << value << std::endl;
        return value;
    }

    // Override pour les expressions entre parenthèses
    virtual std::any visitParenExpr(GuaParser::ParenExprContext *ctx) override {
        return visit(ctx->expression());
    }

    // Override pour les instructions d'exécution d'expressions
    virtual std::any visitExprStmt(GuaParser::ExprStmtContext *ctx) override {
        std::cout << "[Debug] visitExprStmt: Début de l'évaluation de l'expression" << std::endl;
        std::any exprResult = visit(ctx->expression());

        if (exprResult.type() == typeid(int)) {
            int value = std::any_cast<int>(exprResult);
            std::cout << "Expression évaluée: " << value << std::endl;
        }
        else if (exprResult.type() == typeid(float)) {
            float value = std::any_cast<float>(exprResult);
            std::cout << "Expression évaluée: " << value << std::endl;
        }
        else if (exprResult.type() == typeid(std::string)) {
            std::string value = std::any_cast<std::string>(exprResult);
            std::cout << "Expression évaluée: " << value << std::endl;
        }
        // Ajouter la gestion des autres types si nécessaire

        return std::any();
    }

    // Ajouter d'autres overrides pour les instructions conditionnelles, boucles, etc.
    // ...
};

int main(int argc, const char* argv[]) {
    std::cout << "Début de l'interpréteur Gua." << std::endl;

    if (argc < 2) {
        std::cerr << "Usage: GuaInterpreter <source-file>\n";
        return 1;
    }

    std::ifstream stream(argv[1]);
    if (!stream.is_open()) {
        std::cerr << "Impossible d'ouvrir le fichier : " << argv[1] << "\n";
        return 1;
    }

    std::cout << "Lecture du fichier source : " << argv[1] << "\n";

    ANTLRInputStream input(stream);
    GuaLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    GuaParser parser(&tokens);

    std::cout << "Parsing du fichier source." << std::endl;
    GuaParser::ProgramContext* tree = parser.program();

    if (!tree) {
        std::cerr << "Erreur : L'arbre de parsing est null." << std::endl;
        return 1;
    }

    std::cout << "Interprétation du code." << std::endl;

    // Créer et utiliser le Visitor
    GuaInterpreterVisitor visitor;
    visitor.visit(tree);

    std::cout << "Fin de l'interpréteur Gua." << std::endl;
    return 0;
}