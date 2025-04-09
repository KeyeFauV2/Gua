// src/AST/ClassDeclarationNode.java
package AST;

import Visitors.ASTVisitor;
import java.util.List;

public class ClassDeclarationNode extends ASTNode {
    public String className;
    public String superClassName; // Peut être null
    public List<ASTNode> classBody;

    public ClassDeclarationNode(String className, String superClassName, List<ASTNode> classBody) {
        this.className = className;
        this.superClassName = superClassName;
        this.classBody = classBody;

        for (ASTNode member : classBody) {
            member.incrementRefCount();
        }
    }

    @Override
    protected void cleanup() {
        for (ASTNode member : classBody) {
            member.decrementRefCount();
        }
        classBody.clear();
        System.out.println("Nettoyage de ClassDeclarationNode: " + className);
    }

    @Override
    public <T> T accept(ASTVisitor<T> visitor) {
        return visitor.visitClassDeclaration(this);
    }
}