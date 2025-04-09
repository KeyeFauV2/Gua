// Generated from Gua.g4 by ANTLR 4.13.2
package GuaParserGenerated;

import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link GuaParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface GuaVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link GuaParser#program}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitProgram(GuaParser.ProgramContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStatement(GuaParser.StatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#includeStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIncludeStatement(GuaParser.IncludeStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#variableDeclaration}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVariableDeclaration(GuaParser.VariableDeclarationContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#classDeclaration}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitClassDeclaration(GuaParser.ClassDeclarationContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#classBody}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitClassBody(GuaParser.ClassBodyContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#functionDeclaration}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFunctionDeclaration(GuaParser.FunctionDeclarationContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#parameterList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitParameterList(GuaParser.ParameterListContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#parameter}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitParameter(GuaParser.ParameterContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#expressionStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpressionStatement(GuaParser.ExpressionStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#ifStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIfStatement(GuaParser.IfStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#tryCatchFinallyStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTryCatchFinallyStatement(GuaParser.TryCatchFinallyStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#block}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBlock(GuaParser.BlockContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpression(GuaParser.ExpressionContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#assignment}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignment(GuaParser.AssignmentContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#logicalOr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLogicalOr(GuaParser.LogicalOrContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#logicalAnd}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLogicalAnd(GuaParser.LogicalAndContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#equality}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitEquality(GuaParser.EqualityContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#comparison}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitComparison(GuaParser.ComparisonContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#addition}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAddition(GuaParser.AdditionContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#multiplication}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMultiplication(GuaParser.MultiplicationContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#unary}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitUnary(GuaParser.UnaryContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#primary}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPrimary(GuaParser.PrimaryContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#functionCall}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFunctionCall(GuaParser.FunctionCallContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#classInstantiation}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitClassInstantiation(GuaParser.ClassInstantiationContext ctx);
	/**
	 * Visit a parse tree produced by {@link GuaParser#argumentList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitArgumentList(GuaParser.ArgumentListContext ctx);
}