
// Generated from Gua.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "GuaVisitor.h"


/**
 * This class provides an empty implementation of GuaVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  GuaBaseVisitor : public GuaVisitor {
public:

  virtual std::any visitProg(GuaParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDecl(GuaParser::FunctionDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamList(GuaParser::ParamListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(GuaParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDecl(GuaParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(GuaParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprStmt(GuaParser::ExprStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStmt(GuaParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(GuaParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }


};

