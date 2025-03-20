
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
    virtual std::any visitProg(GuaParser::ProgContext *context) = 0;

    virtual std::any visitFunctionDecl(GuaParser::FunctionDeclContext *context) = 0;

    virtual std::any visitParamList(GuaParser::ParamListContext *context) = 0;

    virtual std::any visitBlock(GuaParser::BlockContext *context) = 0;

    virtual std::any visitVarDecl(GuaParser::VarDeclContext *context) = 0;

    virtual std::any visitStatement(GuaParser::StatementContext *context) = 0;

    virtual std::any visitExprStmt(GuaParser::ExprStmtContext *context) = 0;

    virtual std::any visitReturnStmt(GuaParser::ReturnStmtContext *context) = 0;

    virtual std::any visitExpression(GuaParser::ExpressionContext *context) = 0;


};

