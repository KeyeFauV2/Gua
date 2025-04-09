// Generated from Gua.g4 by ANTLR 4.13.2
package GuaParserGenerated;

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
	 * Enter a parse tree produced by {@link GuaParser#includeStatement}.
	 * @param ctx the parse tree
	 */
	void enterIncludeStatement(GuaParser.IncludeStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#includeStatement}.
	 * @param ctx the parse tree
	 */
	void exitIncludeStatement(GuaParser.IncludeStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#variableDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterVariableDeclaration(GuaParser.VariableDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#variableDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitVariableDeclaration(GuaParser.VariableDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#classDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterClassDeclaration(GuaParser.ClassDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#classDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitClassDeclaration(GuaParser.ClassDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#classBody}.
	 * @param ctx the parse tree
	 */
	void enterClassBody(GuaParser.ClassBodyContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#classBody}.
	 * @param ctx the parse tree
	 */
	void exitClassBody(GuaParser.ClassBodyContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#functionDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterFunctionDeclaration(GuaParser.FunctionDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#functionDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitFunctionDeclaration(GuaParser.FunctionDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#parameterList}.
	 * @param ctx the parse tree
	 */
	void enterParameterList(GuaParser.ParameterListContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#parameterList}.
	 * @param ctx the parse tree
	 */
	void exitParameterList(GuaParser.ParameterListContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#parameter}.
	 * @param ctx the parse tree
	 */
	void enterParameter(GuaParser.ParameterContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#parameter}.
	 * @param ctx the parse tree
	 */
	void exitParameter(GuaParser.ParameterContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#expressionStatement}.
	 * @param ctx the parse tree
	 */
	void enterExpressionStatement(GuaParser.ExpressionStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#expressionStatement}.
	 * @param ctx the parse tree
	 */
	void exitExpressionStatement(GuaParser.ExpressionStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#ifStatement}.
	 * @param ctx the parse tree
	 */
	void enterIfStatement(GuaParser.IfStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#ifStatement}.
	 * @param ctx the parse tree
	 */
	void exitIfStatement(GuaParser.IfStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#tryCatchFinallyStatement}.
	 * @param ctx the parse tree
	 */
	void enterTryCatchFinallyStatement(GuaParser.TryCatchFinallyStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#tryCatchFinallyStatement}.
	 * @param ctx the parse tree
	 */
	void exitTryCatchFinallyStatement(GuaParser.TryCatchFinallyStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#block}.
	 * @param ctx the parse tree
	 */
	void enterBlock(GuaParser.BlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#block}.
	 * @param ctx the parse tree
	 */
	void exitBlock(GuaParser.BlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(GuaParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(GuaParser.ExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#assignment}.
	 * @param ctx the parse tree
	 */
	void enterAssignment(GuaParser.AssignmentContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#assignment}.
	 * @param ctx the parse tree
	 */
	void exitAssignment(GuaParser.AssignmentContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#logicalOr}.
	 * @param ctx the parse tree
	 */
	void enterLogicalOr(GuaParser.LogicalOrContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#logicalOr}.
	 * @param ctx the parse tree
	 */
	void exitLogicalOr(GuaParser.LogicalOrContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#logicalAnd}.
	 * @param ctx the parse tree
	 */
	void enterLogicalAnd(GuaParser.LogicalAndContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#logicalAnd}.
	 * @param ctx the parse tree
	 */
	void exitLogicalAnd(GuaParser.LogicalAndContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#equality}.
	 * @param ctx the parse tree
	 */
	void enterEquality(GuaParser.EqualityContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#equality}.
	 * @param ctx the parse tree
	 */
	void exitEquality(GuaParser.EqualityContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#comparison}.
	 * @param ctx the parse tree
	 */
	void enterComparison(GuaParser.ComparisonContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#comparison}.
	 * @param ctx the parse tree
	 */
	void exitComparison(GuaParser.ComparisonContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#addition}.
	 * @param ctx the parse tree
	 */
	void enterAddition(GuaParser.AdditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#addition}.
	 * @param ctx the parse tree
	 */
	void exitAddition(GuaParser.AdditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#multiplication}.
	 * @param ctx the parse tree
	 */
	void enterMultiplication(GuaParser.MultiplicationContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#multiplication}.
	 * @param ctx the parse tree
	 */
	void exitMultiplication(GuaParser.MultiplicationContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#unary}.
	 * @param ctx the parse tree
	 */
	void enterUnary(GuaParser.UnaryContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#unary}.
	 * @param ctx the parse tree
	 */
	void exitUnary(GuaParser.UnaryContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#primary}.
	 * @param ctx the parse tree
	 */
	void enterPrimary(GuaParser.PrimaryContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#primary}.
	 * @param ctx the parse tree
	 */
	void exitPrimary(GuaParser.PrimaryContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#functionCall}.
	 * @param ctx the parse tree
	 */
	void enterFunctionCall(GuaParser.FunctionCallContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#functionCall}.
	 * @param ctx the parse tree
	 */
	void exitFunctionCall(GuaParser.FunctionCallContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#classInstantiation}.
	 * @param ctx the parse tree
	 */
	void enterClassInstantiation(GuaParser.ClassInstantiationContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#classInstantiation}.
	 * @param ctx the parse tree
	 */
	void exitClassInstantiation(GuaParser.ClassInstantiationContext ctx);
	/**
	 * Enter a parse tree produced by {@link GuaParser#argumentList}.
	 * @param ctx the parse tree
	 */
	void enterArgumentList(GuaParser.ArgumentListContext ctx);
	/**
	 * Exit a parse tree produced by {@link GuaParser#argumentList}.
	 * @param ctx the parse tree
	 */
	void exitArgumentList(GuaParser.ArgumentListContext ctx);
}