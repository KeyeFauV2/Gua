// src/AST/ProgramNode.java
package AST;

import Visitors.ASTVisitor;
import java.util.List;

public class ProgramNode extends ASTNode {
    public List<ASTNode> statements;

    public ProgramNode(List<ASTNode> statements) {
        this.statements = statements;
    }

    @Override
    protected void cleanup() {
        statements.clear();
        System.out.println("Nettoyage de ProgramNode");
    }

    @Override
    public <T> T accept(ASTVisitor<T> visitor) {
        return visitor.visitProgram(this);
    }
}