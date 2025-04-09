// src/AST/TryCatchFinallyNode.java
package AST;

import Visitors.ASTVisitor;

/**
 * Représente une structure de gestion d'exceptions dans Gua.
 * Exemple :
 * try {
 *     // bloc try
 * } catch (e) {
 *     // bloc catch
 * } finally {
 *     // bloc finally
 * }
 */
public class TryCatchFinallyNode extends ASTNode {
    public BlockNode tryBlock;
    public String catchVariable; // Nom de la variable d'exception
    public BlockNode catchBlock; // Peut être null si pas de catch
    public BlockNode finallyBlock; // Peut être null si pas de finally

    /**
     * Constructeur pour TryCatchFinallyNode.
     *
     * @param tryBlock      Le bloc à exécuter dans le try.
     * @param catchVariable Le nom de la variable pour l'exception dans le catch.
     * @param catchBlock    Le bloc exécuté en cas d'exception (peut être null).
     * @param finallyBlock  Le bloc exécuté toujours (peut être null).
     */
    public TryCatchFinallyNode(BlockNode tryBlock, String catchVariable, BlockNode catchBlock, BlockNode finallyBlock) {
        this.tryBlock = tryBlock;
        this.catchVariable = catchVariable;
        this.catchBlock = catchBlock;
        this.finallyBlock = finallyBlock;

        // Incrémenter les compteurs de références pour le GC
        if (tryBlock != null) tryBlock.incrementRefCount();
        if (catchBlock != null) catchBlock.incrementRefCount();
        if (finallyBlock != null) finallyBlock.incrementRefCount();
    }

    /**
     * Méthode de nettoyage pour le Garbage Collector.
     */
    @Override
    protected void cleanup() {
        if (tryBlock != null) {
            tryBlock.decrementRefCount();
            tryBlock = null;
        }
        if (catchBlock != null) {
            catchBlock.decrementRefCount();
            catchBlock = null;
        }
        if (finallyBlock != null) {
            finallyBlock.decrementRefCount();
            finallyBlock = null;
        }
        System.out.println("Nettoyage de TryCatchFinallyNode");
    }

    /**
     * Accepte un visiteur pour le pattern Visitor.
     *
     * @param visitor Le visiteur.
     * @param <T>     Le type de retour.
     * @return Le résultat du visiteur.
     */
    @Override
    public <T> T accept(ASTVisitor<T> visitor) {
        return visitor.visitTryCatchFinally(this);
    }
}