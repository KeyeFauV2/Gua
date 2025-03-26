// Generated from c:/Gua/grammar/Gua.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link GuaParser}.
 */
public interface GuaListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link GuaParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(GuaParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(GuaParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(GuaParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(GuaParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#varDecl}.
	 * @param ctx the parse tree
	 */
	void enterVarDecl(GuaParser.VarDeclContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#varDecl}.
	 * @param ctx the parse tree
	 */
	void exitVarDecl(GuaParser.VarDeclContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#exprStmt}.
	 * @param ctx the parse tree
	 */
	void enterExprStmt(GuaParser.ExprStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#exprStmt}.
	 * @param ctx the parse tree
	 */
	void exitExprStmt(GuaParser.ExprStmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#ifStmt}.
	 * @param ctx the parse tree
	 */
	void enterIfStmt(GuaParser.IfStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#ifStmt}.
	 * @param ctx the parse tree
	 */
	void exitIfStmt(GuaParser.IfStmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#whileStmt}.
	 * @param ctx the parse tree
	 */
	void enterWhileStmt(GuaParser.WhileStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#whileStmt}.
	 * @param ctx the parse tree
	 */
	void exitWhileStmt(GuaParser.WhileStmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code StringExpr}
	 * labeled alternative in {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterStringExpr(GuaParser.StringExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code StringExpr}
	 * labeled alternative in {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitStringExpr(GuaParser.StringExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code PowerExpr}
	 * labeled alternative in {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterPowerExpr(GuaParser.PowerExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code PowerExpr}
	 * labeled alternative in {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitPowerExpr(GuaParser.PowerExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code MulDivExpr}
	 * labeled alternative in {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterMulDivExpr(GuaParser.MulDivExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code MulDivExpr}
	 * labeled alternative in {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitMulDivExpr(GuaParser.MulDivExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code IdExpr}
	 * labeled alternative in {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterIdExpr(GuaParser.IdExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code IdExpr}
	 * labeled alternative in {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitIdExpr(GuaParser.IdExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code IntExpr}
	 * labeled alternative in {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterIntExpr(GuaParser.IntExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code IntExpr}
	 * labeled alternative in {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitIntExpr(GuaParser.IntExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ParenExpr}
	 * labeled alternative in {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterParenExpr(GuaParser.ParenExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ParenExpr}
	 * labeled alternative in {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitParenExpr(GuaParser.ParenExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code AddSubExpr}
	 * labeled alternative in {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterAddSubExpr(GuaParser.AddSubExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code AddSubExpr}
	 * labeled alternative in {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitAddSubExpr(GuaParser.AddSubExprContext ctx);
}