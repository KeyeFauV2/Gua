// src/AST/IncludeStatementNode.java
package AST;

import Visitors.ASTVisitor;

/**
 * Représente une instruction d'inclusion de module dans Gua.
 * Exemple : include "console.gua";
 */
public class IncludeStatementNode extends ASTNode {
    public String moduleName;

    /**
     * Constructeur pour IncludeStatementNode.
     *
     * @param moduleName Le nom du module à inclure (sans guillemets).
     */
    public IncludeStatementNode(String moduleName) {
        this.moduleName = moduleName;
    }

    /**
     * Méthode de nettoyage pour le Garbage Collector.
     */
    @Override
    protected void cleanup() {
        // Pas de ressources spécifiques à libérer pour l'inclusion.
        System.out.println("Nettoyage de IncludeStatementNode: " + moduleName);
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
        return visitor.visitIncludeStatement(this);
    }
}