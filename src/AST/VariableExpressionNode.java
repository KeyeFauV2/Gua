// src/AST/VariableExpressionNode.java
package AST;

import Visitors.ASTVisitor;

public class VariableExpressionNode extends ExpressionNode {
    public String name;

    public VariableExpressionNode(String name) {
        this.name = name;
    }

    @Override
    protected void cleanup() {
        System.out.println("Nettoyage de VariableExpressionNode: " + name);
    }

    @Override
    public <T> T accept(ASTVisitor<T> visitor) {
        return visitor.visitVariableExpression(this);
    }
}