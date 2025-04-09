// src/Visitors/ASTVisitor.java
package Visitors;

import AST.*;

public interface ASTVisitor<T> {
    T visitProgram(ProgramNode node);
    T visitVariableDeclaration(VariableDeclarationNode node);
    T visitClassDeclaration(ClassDeclarationNode node);
    T visitFunctionDeclaration(FunctionDeclarationNode node);
    T visitIncludeStatement(IncludeStatementNode node);
    T visitIfStatement(IfStatementNode node);
    T visitTryCatchFinally(TryCatchFinallyNode node);
    T visitBlock(BlockNode node);
    T visitParameter(ParameterNode node);
    T visitFunctionCall(FunctionCallNode node);
    T visitClassInstantiation(ClassInstantiationNode node);
    T visitLiteralExpression(LiteralExpressionNode node);
    T visitVariableExpression(VariableExpressionNode node);
    // Ajouter d'autres méthodes de visite pour les nouveaux nœuds AST si nécessaire
}