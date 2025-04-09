// src/Interpreters/Interpreter.java
package Interpreters;

import AST.*;
import Visitors.ASTVisitor;

import java.util.HashMap;
import java.util.Map;

public class Interpreter implements ASTVisitor<Void> {
    private Map<String, Object> variables = new HashMap<>();
    private Map<String, ClassDeclarationNode> classes = new HashMap<>();
    private Map<String, FunctionDeclarationNode> functions = new HashMap<>();

    @Override
    public Void visitProgram(ProgramNode node) {
        for (ASTNode stmt : node.statements) {
            stmt.accept(this);
        }
        return null;
    }

    @Override
    public Void visitVariableDeclaration(VariableDeclarationNode node) {
        Object value = evaluateExpression(node.expression);
        variables.put(node.name, value);
        // Appeler Console.print via NativeLibrary
        NativeLibrary.Console_print(node.name + " = " + value);
        return null;
    }

    @Override
    public Void visitClassDeclaration(ClassDeclarationNode node) {
        classes.put(node.className, node);
        NativeLibrary.Console_print("Classe " + node.className + " déclarée.");
        return null;
    }

    @Override
    public Void visitFunctionDeclaration(FunctionDeclarationNode node) {
        functions.put(node.functionName, node);
        NativeLibrary.Console_print("Fonction " + node.functionName + " déclarée.");
        return null;
    }

    @Override
    public Void visitIncludeStatement(IncludeStatementNode node) {
        // Charger et exécuter le module inclus (à implémenter selon l'architecture de Gua)
        NativeLibrary.Console_print("Inclusion du module: " + node.moduleName);
        return null;
    }

    @Override
    public Void visitIfStatement(IfStatementNode node) {
        Object condition = evaluateExpression(node.condition);
        if (condition instanceof Boolean && (Boolean) condition) {
            node.thenBlock.accept(this);
        } else {
            if (node.elseBlock != null) {
                node.elseBlock.accept(this);
            }
        }
        return null;
    }

    @Override
    public Void visitTryCatchFinally(TryCatchFinallyNode node) {
        try {
            node.tryBlock.accept(this);
        } catch (Exception e) {
            if (node.catchBlock != null) {
                variables.put(node.catchVariable, e.getMessage());
                node.catchBlock.accept(this);
                variables.remove(node.catchVariable);
            }
        } finally {
            if (node.finallyBlock != null) {
                node.finallyBlock.accept(this);
            }
        }
        return null;
    }

    @Override
    public Void visitBlock(BlockNode node) {
        for (ASTNode stmt : node.statements) {
            stmt.accept(this);
        }
        return null;
    }

    @Override
    public Void visitParameter(ParameterNode node) {
        // Non utilisé dans l'interpréteur de ce niveau
        return null;
    }

    @Override
    public Void visitFunctionCall(FunctionCallNode node) {
        if (node.objectName.equals("Console")) {
            switch (node.functionName) {
                case "print":
                    if (node.arguments.size() == 1) {
                        Object arg = evaluateExpression(node.arguments.get(0));
                        NativeLibrary.Console_print(arg.toString());
                    } else {
                        NativeLibrary.Console_error("Console:print prend exactement un argument.");
                    }
                    break;
                case "warn":
                    if (node.arguments.size() == 1) {
                        Object arg = evaluateExpression(node.arguments.get(0));
                        NativeLibrary.Console_warn(arg.toString());
                    } else {
                        NativeLibrary.Console_error("Console:warn prend exactement un argument.");
                    }
                    break;
                case "error":
                    if (node.arguments.size() == 1) {
                        Object arg = evaluateExpression(node.arguments.get(0));
                        NativeLibrary.Console_error(arg.toString());
                    } else {
                        NativeLibrary.Console_error("Console:error prend exactement un argument.");
                    }
                    break;
                case "debug":
                    if (node.arguments.size() == 1) {
                        Object arg = evaluateExpression(node.arguments.get(0));
                        NativeLibrary.Console_debug(arg.toString());
                    } else {
                        NativeLibrary.Console_error("Console:debug prend exactement un argument.");
                    }
                    break;
                default:
                    NativeLibrary.Console_error("Console n'a pas de méthode: " + node.functionName);
            }
        } else {
            // Gérer d'autres objets/méthodes si nécessaire
            NativeLibrary.Console_error("Objet inconnu: " + node.objectName);
        }
        return null;
    }

    @Override
    public Void visitClassInstantiation(ClassInstantiationNode node) {
        if (classes.containsKey(node.className)) {
            // Pour cet exemple, la classe n'a pas de logique d'instanciation réelle
            // Vous pouvez implémenter une vraie représentation d'instance si nécessaire
            Object instance = new Object(); // Placeholder
            String instanceName = node.className.toLowerCase() + "_instance";
            variables.put(instanceName, instance);
            NativeLibrary.Console_print("Instance de " + node.className + " créée.");
        } else {
            throw new RuntimeException("Classe non déclarée: " + node.className);
        }
        return null;
    }

    @Override
    public Void visitLiteralExpression(LiteralExpressionNode node) {
        // Les littéraux sont directement évalués dans les expressions
        return null;
    }

    @Override
    public Void visitVariableExpression(VariableExpressionNode node) {
        if (!variables.containsKey(node.name)) {
            throw new RuntimeException("Variable non déclarée: " + node.name);
        }
        return null;
    }

    // Ajouter des implémentations pour d'autres types d'expressions

    // Méthode pour évaluer les expressions
    private Object evaluateExpression(ExpressionNode node) {
        if (node instanceof FunctionCallNode) {
            // Déjà géré dans visitFunctionCall
            return null;
        } else if (node instanceof ClassInstantiationNode) {
            // Déjà géré dans visitClassInstantiation
            return null;
        } else if (node instanceof VariableExpressionNode) {
            VariableExpressionNode varExpr = (VariableExpressionNode) node;
            String varName = varExpr.name;
            return variables.get(varName);
        } else if (node instanceof LiteralExpressionNode) {
            LiteralExpressionNode litExpr = (LiteralExpressionNode) node;
            return litExpr.value;
        }
        // Ajouter d'autres types d'expressions si nécessaire
        return null;
    }
}