// src/AST/LiteralExpressionNode.java
package AST;

import Visitors.ASTVisitor;

public class LiteralExpressionNode extends ExpressionNode {
    public Object value;

    public LiteralExpressionNode(Object value) {
        this.value = value;
    }

    @Override
    protected void cleanup() {
        System.out.println("Nettoyage de LiteralExpressionNode: " + value);
    }

    @Override
    public <T> T accept(ASTVisitor<T> visitor) {
        return visitor.visitLiteralExpression(this);
    }
}