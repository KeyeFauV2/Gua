// src/AST/VariableDeclarationNode.java
package AST;

import Visitors.ASTVisitor;

public class VariableDeclarationNode extends ASTNode {
    public String name;
    public String type; // Peut être null
    public ExpressionNode expression;

    public VariableDeclarationNode(String name, String type, ExpressionNode expression) {
        this.name = name;
        this.type = type;
        this.expression = expression;
    }

    @Override
    protected void cleanup() {
        if (expression != null) {
            expression.decrementRefCount();
            expression = null;
        }
        System.out.println("Nettoyage de VariableDeclarationNode: " + name);
    }

    @Override
    public <T> T accept(ASTVisitor<T> visitor) {
        return visitor.visitVariableDeclaration(this);
    }
}