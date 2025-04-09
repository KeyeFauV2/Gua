// src/Analyzers/SemanticAnalyzer.java
package Analyzers;

import AST.*;
import Visitors.ASTVisitor;

import java.util.HashMap;
import java.util.Map;

public abstract class SemanticAnalyzer implements ASTVisitor<Void> {
    private Map<String, String> symbolTable = new HashMap<>();

    @Override
    public Void visitProgram(ProgramNode node) {
        for (ASTNode stmt : node.statements) {
            stmt.accept(this);
        }
        return null;
    }

    @Override
    public Void visitVariableDeclaration(VariableDeclarationNode node) {
        if (symbolTable.containsKey(node.name)) {
            throw new RuntimeException("Variable déjà déclarée: " + node.name);
        }
        // Ajouter la variable à la table des symboles
        symbolTable.put(node.name, node.type != null ? node.type : "auto");
        // Vérifier l'expression
        node.expression.accept(this);
        return null;
    }

    @Override
    public Void visitClassDeclaration(ClassDeclarationNode node) {
        if (symbolTable.containsKey(node.className)) {
            throw new RuntimeException("Classe déjà déclarée: " + node.className);
        }
        // Ajouter la classe à la table des symboles avec son superClass
        symbolTable.put(node.className, node.superClassName != null ? node.superClassName : "Object");
        // Vérifier les membres de la classe
        for (ASTNode member : node.classBody) {
            member.accept(this);
        }
        return null;
    }

    @Override
    public Void visitFunctionDeclaration(FunctionDeclarationNode node) {
        if (symbolTable.containsKey(node.functionName)) {
            throw new RuntimeException("Fonction déjà déclarée: " + node.functionName);
        }
        // Ajouter la fonction à la table des symboles avec son type de retour
        symbolTable.put(node.functionName, node.returnType != null ? node.returnType : "void");
        // Vérifier les paramètres
        for (ParameterNode param : node.parameters) {
            if (symbolTable.containsKey(param.name)) {
                throw new RuntimeException("Paramètre déjà déclaré: " + param.name);
            }
            symbolTable.put(param.name, param.type);
        }
        // Vérifier le bloc de la fonction
        node.block.accept(this);
        // Supprimer les paramètres de la table des symboles après la fin de la fonction
        for (ParameterNode param : node.parameters) {
            symbolTable.remove(param.name);
        }
        return null;
    }

    @Override
    public Void visitIncludeStatement(IncludeStatementNode node) {
        // Traitement des inclusions de modules (à implémenter selon l'architecture de Gua)
        System.out.println("Inclure le module: " + node.moduleName);
        return null;
    }

    @Override
    public Void visitIfStatement(IfStatementNode node) {
        node.condition.accept(this);
        node.thenBlock.accept(this);
        if (node.elseBlock != null) {
            node.elseBlock.accept(this);
        }
        return null;
    }

    @Override
    public Void visitTryCatchFinally(TryCatchFinallyNode node) {
        node.tryBlock.accept(this);
        if (node.catchBlock != null) {
            // Ajouter la variable du catch à la table des symboles
            symbolTable.put(node.catchVariable, "Error");
            node.catchBlock.accept(this);
            symbolTable.remove(node.catchVariable);
        }
        if (node.finallyBlock != null) {
            node.finallyBlock.accept(this);
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
        // Traitement des paramètres (déjà fait dans visitFunctionDeclaration)
        return null;
    }

    @Override
    public Void visitFunctionCall(FunctionCallNode node) {
        // Vérifier si l'objet et la fonction existent
        if (!symbolTable.containsKey(node.objectName)) {
            throw new RuntimeException("Objet non déclaré: " + node.objectName);
        }
        // Vous pouvez ajouter des vérifications supplémentaires ici
        for (ExpressionNode arg : node.arguments) {
            arg.accept(this);
        }
        return null;
    }

    @Override
    public Void visitClassInstantiation(ClassInstantiationNode node) {
        // Vérifier si la classe existe
        if (!symbolTable.containsKey(node.className)) {
            throw new RuntimeException("Classe non déclarée: " + node.className);
        }
        for (ExpressionNode arg : node.arguments) {
            arg.accept(this);
        }
        return null;
    }

    @Override
    public Void visitLiteralExpression(LiteralExpressionNode node) {
        // Les littéraux sont toujours valides
        return null;
    }

    @Override
    public Void visitVariableExpression(VariableExpressionNode node) {
        if (!symbolTable.containsKey(node.name)) {
            throw new RuntimeException("Variable non déclarée: " + node.name);
        }
        return null;
    }

    // Implémenter d'autres méthodes de visite pour les expressions et autres nœuds AST si nécessaire
}