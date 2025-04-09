// src/AST/FunctionDeclarationNode.java
package AST;

import Visitors.ASTVisitor;
import java.util.List;

public class FunctionDeclarationNode extends ASTNode {
    public boolean isOverride;
    public String functionName;
    public List<ParameterNode> parameters;
    public String returnType; // Peut être null
    public BlockNode block;

    public FunctionDeclarationNode(boolean isOverride, String functionName, List<ParameterNode> parameters, String returnType, BlockNode block) {
        this.isOverride = isOverride;
        this.functionName = functionName;
        this.parameters = parameters;
        this.returnType = returnType;
        this.block = block;

        for (ParameterNode param : parameters) {
            param.incrementRefCount();
        }
        if (block != null) {
            block.incrementRefCount();
        }
    }

    @Override
    protected void cleanup() {
        for (ParameterNode param : parameters) {
            param.decrementRefCount();
        }
        if (block != null) {
            block.decrementRefCount();
            block = null;
        }
        System.out.println("Nettoyage de FunctionDeclarationNode: " + functionName);
    }

    @Override
    public <T> T accept(ASTVisitor<T> visitor) {
        return visitor.visitFunctionDeclaration(this);
    }
}