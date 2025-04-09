// src/AST/ClassInstantiationNode.java
package AST;

import Visitors.ASTVisitor;
import java.util.List;

public class ClassInstantiationNode extends ExpressionNode {
    public String className;
    public List<ExpressionNode> arguments;

    public ClassInstantiationNode(String className, List<ExpressionNode> arguments) {
        this.className = className;
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
        System.out.println("Nettoyage de ClassInstantiationNode: new " + className);
    }

    @Override
    public <T> T accept(ASTVisitor<T> visitor) {
        return visitor.visitClassInstantiation(this);
    }
}