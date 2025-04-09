// src/AST/BlockNode.java
package AST;

import Visitors.ASTVisitor;
import java.util.List;

public class BlockNode extends ASTNode {
    public List<ASTNode> statements;

    public BlockNode(List<ASTNode> statements) {
        this.statements = statements;
        for (ASTNode stmt : statements) {
            stmt.incrementRefCount();
        }
    }

    @Override
    protected void cleanup() {
        for (ASTNode stmt : statements) {
            stmt.decrementRefCount();
        }
        statements.clear();
        System.out.println("Nettoyage de BlockNode");
    }

    @Override
    public <T> T accept(ASTVisitor<T> visitor) {
        return visitor.visitBlock(this);
    }
}