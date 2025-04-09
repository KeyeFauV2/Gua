// src/AST/ASTNode.java
package AST;

public abstract class ASTNode {
    private int referenceCount = 0;

    public void incrementRefCount() {
        referenceCount++;
    }

    public void decrementRefCount() {
        referenceCount--;
        if (referenceCount <= 0) {
            this.cleanup();
        }
    }

    protected abstract void cleanup();

    public abstract <T> T accept(Visitors.ASTVisitor<T> visitor);
}