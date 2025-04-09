// src/AST/IfStatementNode.java
package AST;

import Visitors.ASTVisitor;

/**
 * Représente une instruction conditionnelle dans Gua.
 * Exemple :
 * if (condition) {
 *     // bloc alors
 * } else {
 *     // bloc sinon
 * }
 */
public class IfStatementNode extends ASTNode {
    public ExpressionNode condition;
    public BlockNode thenBlock;
    public BlockNode elseBlock; // Peut être null si pas d'else

    /**
     * Constructeur pour IfStatementNode.
     *
     * @param condition La condition de l'if.
     * @param thenBlock Le bloc exécuté si la condition est vraie.
     * @param elseBlock Le bloc exécuté si la condition est fausse (peut être null).
     */
    public IfStatementNode(ExpressionNode condition, BlockNode thenBlock, BlockNode elseBlock) {
        this.condition = condition;
        this.thenBlock = thenBlock;
        this.elseBlock = elseBlock;

        // Incrémenter les compteurs de références pour le GC
        if (condition != null) condition.incrementRefCount();
        if (thenBlock != null) thenBlock.incrementRefCount();
        if (elseBlock != null) elseBlock.incrementRefCount();
    }

    /**
     * Méthode de nettoyage pour le Garbage Collector.
     */
    @Override
    protected void cleanup() {
        if (condition != null) {
            condition.decrementRefCount();
            condition = null;
        }
        if (thenBlock != null) {
            thenBlock.decrementRefCount();
            thenBlock = null;
        }
        if (elseBlock != null) {
            elseBlock.decrementRefCount();
            elseBlock = null;
        }
        System.out.println("Nettoyage de IfStatementNode");
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
        return visitor.visitIfStatement(this);
    }
}