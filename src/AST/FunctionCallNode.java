// src/AST/FunctionCallNode.java
package AST;

import Visitors.ASTVisitor;
import java.util.List;

public class FunctionCallNode extends ExpressionNode {
    public String objectName;
    public String functionName;
    public List<ExpressionNode> arguments;

    public FunctionCallNode(String objectName, String functionName, List<ExpressionNode> arguments) {
        this.objectName = objectName;
        this.functionName = functionName;
        this.arguments = arguments;
        for (ExpressionNode arg : arguments) {
            arg.incrementRefCount();
        }
    }

    @Override
    protected void cleanup() {
        for (ExpressionNode arg : arguments) {
            arg.decrementRefCount();
        }
        arguments.clear();
        System.out.println("Nettoyage de FunctionCallNode: " + objectName + ":" + functionName);
    }

    @Override
    public <T> T accept(ASTVisitor<T> visitor) {
        return visitor.visitFunctionCall(this);
    }
}