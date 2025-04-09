// src/Builders/ASTBuilder.java
package Builders;

import GuaParserGenerated.GuaBaseVisitor;
import GuaParserGenerated.GuaParser;
import AST.*;
import Visitors.ASTVisitor;

import java.util.ArrayList;
import java.util.List;

public class ASTBuilder extends GuaBaseVisitor<ASTNode> {

    @Override
    public ASTNode visitProgram(GuaParser.ProgramContext ctx) {
        List<ASTNode> statements = new ArrayList<>();
        for (GuaParser.StatementContext stmtCtx : ctx.statement()) {
            ASTNode stmt = visit(stmtCtx);
            if (stmt != null) {
                statements.add(stmt);
            }
        }
        return new ProgramNode(statements);
    }

    @Override
    public ASTNode visitIncludeStatement(GuaParser.IncludeStatementContext ctx) {
        String moduleName = ctx.STRING_LITERAL().getText();
        // Enlever les guillemets autour du moduleName
        moduleName = moduleName.substring(1, moduleName.length() - 1);
        return new IncludeStatementNode(moduleName);
    }

    @Override
    public ASTNode visitVariableDeclaration(GuaParser.VariableDeclarationContext ctx) {
        String name = ctx.IDENTIFIER().getText();
        String type = null;
        if (ctx.typeAnnotation() != null) {
            type = ctx.typeAnnotation().TYPE_NAME().getText();
        }
        ExpressionNode expr = (ExpressionNode) visit(ctx.expression());
        return new VariableDeclarationNode(name, type, expr);
    }

    @Override
    public ASTNode visitClassDeclaration(GuaParser.ClassDeclarationContext ctx) {
        String className = ctx.IDENTIFIER(0).getText();
        String superClassName = null;
        if (ctx.IDENTIFIER().size() > 1) {
            superClassName = ctx.IDENTIFIER(1).getText();
        }
        List<ASTNode> classBody = new ArrayList<>();
        for (GuaParser.StatementContext stmtCtx : ctx.classBody().statement()) {
            ASTNode stmt = visit(stmtCtx);
            if (stmt != null) {
                classBody.add(stmt);
            }
        }
        return new ClassDeclarationNode(className, superClassName, classBody);
    }

    @Override
    public ASTNode visitFunctionDeclaration(GuaParser.FunctionDeclarationContext ctx) {
        boolean isOverride = ctx.getChild(0).getText().equals("override");
        int functionNameIndex = isOverride ? 2 : 1;
        String functionName = ctx.IDENTIFIER(functionNameIndex).getText();

        // Paramètres
        List<ParameterNode> parameters = new ArrayList<>();
        if (ctx.parameterList() != null) {
            for (GuaParser.ParameterContext paramCtx : ctx.parameterList().parameter()) {
                String paramName = paramCtx.IDENTIFIER().getText();
                String paramType = paramCtx.TYPE_NAME().getText();
                parameters.add(new ParameterNode(paramName, paramType));
            }
        }

        // Type de retour
        String returnType = null;
        if (ctx.TYPE_NAME() != null) {
            returnType = ctx.TYPE_NAME().getText();
        }

        // Bloc de la fonction
        BlockNode block = (BlockNode) visit(ctx.block());

        return new FunctionDeclarationNode(isOverride, functionName, parameters, returnType, block);
    }

    @Override
    public ASTNode visitIfStatement(GuaParser.IfStatementContext ctx) {
        ExpressionNode condition = (ExpressionNode) visit(ctx.expression());
        BlockNode thenBlock = (BlockNode) visit(ctx.block(0));
        BlockNode elseBlock = null;
        if (ctx.block().size() > 1) {
            elseBlock = (BlockNode) visit(ctx.block(1));
        }
        return new IfStatementNode(condition, thenBlock, elseBlock);
    }

    @Override
    public ASTNode visitTryCatchFinallyStatement(GuaParser.TryCatchFinallyStatementContext ctx) {
        BlockNode tryBlock = (BlockNode) visit(ctx.block(0));
        String catchVariable = null;
        BlockNode catchBlock = null;
        BlockNode finallyBlock = null;

        if (ctx.catchBlock() != null) {
            catchVariable = ctx.catchBlock().IDENTIFIER().getText();
            catchBlock = (BlockNode) visit(ctx.catchBlock().block());
        }

        if (ctx.finallyBlock() != null) {
            finallyBlock = (BlockNode) visit(ctx.finallyBlock().block());
        }

        return new TryCatchFinallyNode(tryBlock, catchVariable, catchBlock, finallyBlock);
    }

    @Override
    public ASTNode visitExpressionStatement(GuaParser.ExpressionStatementContext ctx) {
        ExpressionNode expr = (ExpressionNode) visit(ctx.expression());
        return expr;
    }

    @Override
    public ASTNode visitFunctionCall(GuaParser.FunctionCallContext ctx) {
        String objectName = ctx.IDENTIFIER(0).getText();
        String functionName = ctx.IDENTIFIER(1).getText();
        List<ExpressionNode> arguments = new ArrayList<>();
        if (ctx.argumentList() != null) {
            for (GuaParser.ExpressionContext exprCtx : ctx.argumentList().expression()) {
                ExpressionNode arg = (ExpressionNode) visit(exprCtx);
                arguments.add(arg);
            }
        }
        return new FunctionCallNode(objectName, functionName, arguments);
    }

    @Override
    public ASTNode visitClassInstantiation(GuaParser.ClassInstantiationContext ctx) {
        String className = ctx.IDENTIFIER().getText();
        List<ExpressionNode> arguments = new ArrayList<>();
        if (ctx.argumentList() != null) {
            for (GuaParser.ExpressionContext exprCtx : ctx.argumentList().expression()) {
                ExpressionNode arg = (ExpressionNode) visit(exprCtx);
                arguments.add(arg);
            }
        }
        return new ClassInstantiationNode(className, arguments);
    }

    @Override
    public ASTNode visitLiteralExpression(GuaParser.LiteralExpressionContext ctx) {
        // Implémentez l'évaluation des littéraux
        if (ctx.INTEGER() != null) {
            return new LiteralExpressionNode(Integer.parseInt(ctx.INTEGER().getText()));
        } else if (ctx.DOUBLE() != null) {
            return new LiteralExpressionNode(Double.parseDouble(ctx.DOUBLE().getText()));
        } else if (ctx.CHAR() != null) {
            String charText = ctx.CHAR().getText();
            char c = charText.charAt(1);
            return new LiteralExpressionNode(c);
        } else if (ctx.STRING_LITERAL() != null) {
            String str = ctx.STRING_LITERAL().getText();
            // Enlever les guillemets
            str = str.substring(1, str.length() - 1);
            return new LiteralExpressionNode(str);
        }

        return null;
    }

    @Override
    public ASTNode visitVariableExpression(GuaParser.VariableExpressionContext ctx) {
        String varName = ctx.IDENTIFIER().getText();
        return new VariableExpressionNode(varName);
    }
}