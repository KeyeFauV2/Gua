
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

  virtual std::any visitProgram(GuaParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(GuaParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIncludeStmt(GuaParser::IncludeStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDecl(GuaParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(GuaParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprStmt(GuaParser::ExprStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(GuaParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStmt(GuaParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(GuaParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDecl(GuaParser::FunctionDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamList(GuaParser::ParamListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassDecl(GuaParser::ClassDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassBody(GuaParser::ClassBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstructorDecl(GuaParser::ConstructorDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeconstructorDecl(GuaParser::DeconstructorDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceImplDecl(GuaParser::InterfaceImplDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceDecl(GuaParser::InterfaceDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceBody(GuaParser::InterfaceBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionSignature(GuaParser::FunctionSignatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringExpr(GuaParser::StringExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatExpr(GuaParser::FloatExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdExpr(GuaParser::IdExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalExpr(GuaParser::RelationalExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPowerExpr(GuaParser::PowerExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCallExpr(GuaParser::FunctionCallExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDivExpr(GuaParser::MulDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqualityExpr(GuaParser::EqualityExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewExpr(GuaParser::NewExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntExpr(GuaParser::IntExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberFunctionCallExpr(GuaParser::MemberFunctionCallExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpr(GuaParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberAccessExpr(GuaParser::MemberAccessExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSubExpr(GuaParser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgList(GuaParser::ArgListContext *ctx) override {
    return visitChildren(ctx);
  }


};

