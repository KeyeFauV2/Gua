#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include "antlr4-runtime.h"
#include "GuaLexer.h"
#include "GuaParser.h"
#include "GuaBaseVisitor.h"

using namespace antlr4;

// Classe Visitor Personnalisée pour l'Interpréteur Gua
class GuaInterpreterVisitor : public GuaBaseVisitor {
public:
    // Table de symboles pour stocker les variables et leurs valeurs
    std::unordered_map<std::string, int> symbolTable;

    // Override pour les déclarations de variables
    virtual antlrcpp::Any visitVarDecl(GuaParser::VarDeclContext *ctx) override {
        std::string varName = ctx->IDENTIFIER()->getText();
        std::cout << "[Debug] visitVarDecl: Variable Name = " << varName << std::endl;

        antlrcpp::Any exprResult = visit(ctx->expression());
        int value = 0;
        try {
            value = std::any_cast<int>(exprResult);
        }
        catch (const std::bad_any_cast& e) {
            std::cerr << "Erreur de conversion Any cast pour la variable '" << varName << "': " << e.what() << std::endl;
            return 0;
        }

        symbolTable[varName] = value;
        std::cout << "Déclaration de variable: " << varName << " = " << value << std::endl;
        return antlrcpp::Any(); // Retourner un Any vide
    }

    // Override pour les expressions
    virtual antlrcpp::Any visitExprStmt(GuaParser::ExprStmtContext *ctx) override {
        std::cout << "[Debug] visitExprStmt: Début de l'évaluation de l'expression" << std::endl;
        antlrcpp::Any exprResult = visit(ctx->expression());

        int value = 0;
        try {
            value = std::any_cast<int>(exprResult);
        }
        catch (const std::bad_any_cast& e) {
            std::cerr << "Erreur de conversion Any cast pour l'expression: " << e.what() << std::endl;
            return 0;
        }

        std::cout << "Expression évaluée: " << value << std::endl;
        return antlrcpp::Any(); // Retourner un Any vide
    }

    // Override pour les entiers
    virtual antlrcpp::Any visitIntExpr(GuaParser::IntExprContext *ctx) override {
        int value = std::stoi(ctx->INT()->getText());
        std::cout << "[Debug] visitIntExpr: " << value << std::endl;
        return value;
    }

    // Override pour les identifiants (variables)
    virtual antlrcpp::Any visitIdExpr(GuaParser::IdExprContext *ctx) override {
        std::string varName = ctx->IDENTIFIER()->getText();
        std::cout << "[Debug] visitIdExpr: Variable Name = " << varName << std::endl;

        if (symbolTable.find(varName) != symbolTable.end()) {
            std::cout << "[Debug] visitIdExpr: Variable '" << varName << "' vaut " << symbolTable[varName] << std::endl;
            return symbolTable[varName];
        } else {
            std::cerr << "Erreur : Variable '" << varName << "' non déclarée." << std::endl;
            return 0;
        }
    }

    // Override pour les expressions d'addition et de soustraction
    virtual antlrcpp::Any visitAddSubExpr(GuaParser::AddSubExprContext *ctx) override {
        std::cout << "[Debug] visitAddSubExpr: Début de l'évaluation de l'expression AddSub" << std::endl;
        int left = 0;
        int right = 0;
        std::string op = "";

        // Utiliser les tokens définis pour récupérer l'opérateur
        if (ctx->ADD()) {
            op = ctx->ADD()->getText();
        }
        else if (ctx->SUB()) {
            op = ctx->SUB()->getText();
        }
        std::cout << "[Debug] visitAddSubExpr: Opérateur = " << op << std::endl;

        try {
            left = std::any_cast<int>(visit(ctx->expression(0)));
            right = std::any_cast<int>(visit(ctx->expression(1)));
        }
        catch (const std::bad_any_cast& e) {
            std::cerr << "Erreur de conversion Any cast dans visitAddSubExpr: " << e.what() << std::endl;
            return 0;
        }

        int result = 0;
        if (op == "+") {
            result = left + right;
        }
        else if (op == "-") {
            result = left - right;
        }

        std::cout << "[Debug] visitAddSubExpr: " << left << " " << op << " " << right << " = " << result << std::endl;
        return result;
    }
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