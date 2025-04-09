// src/AST/ParameterNode.java
package AST;

import Visitors.ASTVisitor;

public class ParameterNode extends ASTNode {
    public String name;
    public String type;

    public ParameterNode(String name, String type) {
        this.name = name;
        this.type = type;
    }

    @Override
    protected void cleanup() {
        System.out.println("Nettoyage de ParameterNode: " + name);
    }

    @Override
    public <T> T accept(ASTVisitor<T> visitor) {
        return visitor.visitParameter(this);
    }
}