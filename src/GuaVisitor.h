
// Generated from Gua.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "GuaParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by GuaParser.
 */
class  GuaVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by GuaParser.
   */
    virtual std::any visitProgram(GuaParser::ProgramContext *context) = 0;

    virtual std::any visitStatement(GuaParser::StatementContext *context) = 0;

    virtual std::any visitVarDecl(GuaParser::VarDeclContext *context) = 0;

    virtual std::any visitAssignment(GuaParser::AssignmentContext *context) = 0;

    virtual std::any visitExprStmt(GuaParser::ExprStmtContext *context) = 0;

    virtual std::any visitIfStmt(GuaParser::IfStmtContext *context) = 0;

    virtual std::any visitWhileStmt(GuaParser::WhileStmtContext *context) = 0;

    virtual std::any visitBlock(GuaParser::BlockContext *context) = 0;

    virtual std::any visitStringExpr(GuaParser::StringExprContext *context) = 0;

    virtual std::any visitPowerExpr(GuaParser::PowerExprContext *context) = 0;

    virtual std::any visitFloatExpr(GuaParser::FloatExprContext *context) = 0;

    virtual std::any visitMulDivExpr(GuaParser::MulDivExprContext *context) = 0;

    virtual std::any visitEqualityExpr(GuaParser::EqualityExprContext *context) = 0;

    virtual std::any visitIdExpr(GuaParser::IdExprContext *context) = 0;

    virtual std::any visitIntExpr(GuaParser::IntExprContext *context) = 0;

    virtual std::any visitRelationalExpr(GuaParser::RelationalExprContext *context) = 0;

    virtual std::any visitParenExpr(GuaParser::ParenExprContext *context) = 0;

    virtual std::any visitAddSubExpr(GuaParser::AddSubExprContext *context) = 0;


};

