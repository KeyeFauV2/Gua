
// Generated from Gua.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "GuaParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by GuaParser.
 */
class  GuaListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(GuaParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(GuaParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(GuaParser::StatementContext *ctx) = 0;
  virtual void exitStatement(GuaParser::StatementContext *ctx) = 0;

  virtual void enterIncludeStmt(GuaParser::IncludeStmtContext *ctx) = 0;
  virtual void exitIncludeStmt(GuaParser::IncludeStmtContext *ctx) = 0;

  virtual void enterVarDecl(GuaParser::VarDeclContext *ctx) = 0;
  virtual void exitVarDecl(GuaParser::VarDeclContext *ctx) = 0;

  virtual void enterAssignment(GuaParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(GuaParser::AssignmentContext *ctx) = 0;

  virtual void enterExprStmt(GuaParser::ExprStmtContext *ctx) = 0;
  virtual void exitExprStmt(GuaParser::ExprStmtContext *ctx) = 0;

  virtual void enterIfStmt(GuaParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(GuaParser::IfStmtContext *ctx) = 0;

  virtual void enterWhileStmt(GuaParser::WhileStmtContext *ctx) = 0;
  virtual void exitWhileStmt(GuaParser::WhileStmtContext *ctx) = 0;

  virtual void enterBlock(GuaParser::BlockContext *ctx) = 0;
  virtual void exitBlock(GuaParser::BlockContext *ctx) = 0;

  virtual void enterFunctionDecl(GuaParser::FunctionDeclContext *ctx) = 0;
  virtual void exitFunctionDecl(GuaParser::FunctionDeclContext *ctx) = 0;

  virtual void enterParamList(GuaParser::ParamListContext *ctx) = 0;
  virtual void exitParamList(GuaParser::ParamListContext *ctx) = 0;

  virtual void enterClassDecl(GuaParser::ClassDeclContext *ctx) = 0;
  virtual void exitClassDecl(GuaParser::ClassDeclContext *ctx) = 0;

  virtual void enterClassBody(GuaParser::ClassBodyContext *ctx) = 0;
  virtual void exitClassBody(GuaParser::ClassBodyContext *ctx) = 0;

  virtual void enterConstructorDecl(GuaParser::ConstructorDeclContext *ctx) = 0;
  virtual void exitConstructorDecl(GuaParser::ConstructorDeclContext *ctx) = 0;

  virtual void enterDeconstructorDecl(GuaParser::DeconstructorDeclContext *ctx) = 0;
  virtual void exitDeconstructorDecl(GuaParser::DeconstructorDeclContext *ctx) = 0;

  virtual void enterInterfaceImplDecl(GuaParser::InterfaceImplDeclContext *ctx) = 0;
  virtual void exitInterfaceImplDecl(GuaParser::InterfaceImplDeclContext *ctx) = 0;

  virtual void enterInterfaceDecl(GuaParser::InterfaceDeclContext *ctx) = 0;
  virtual void exitInterfaceDecl(GuaParser::InterfaceDeclContext *ctx) = 0;

  virtual void enterInterfaceBody(GuaParser::InterfaceBodyContext *ctx) = 0;
  virtual void exitInterfaceBody(GuaParser::InterfaceBodyContext *ctx) = 0;

  virtual void enterFunctionSignature(GuaParser::FunctionSignatureContext *ctx) = 0;
  virtual void exitFunctionSignature(GuaParser::FunctionSignatureContext *ctx) = 0;

  virtual void enterStringExpr(GuaParser::StringExprContext *ctx) = 0;
  virtual void exitStringExpr(GuaParser::StringExprContext *ctx) = 0;

  virtual void enterFloatExpr(GuaParser::FloatExprContext *ctx) = 0;
  virtual void exitFloatExpr(GuaParser::FloatExprContext *ctx) = 0;

  virtual void enterIdExpr(GuaParser::IdExprContext *ctx) = 0;
  virtual void exitIdExpr(GuaParser::IdExprContext *ctx) = 0;

  virtual void enterRelationalExpr(GuaParser::RelationalExprContext *ctx) = 0;
  virtual void exitRelationalExpr(GuaParser::RelationalExprContext *ctx) = 0;

  virtual void enterPowerExpr(GuaParser::PowerExprContext *ctx) = 0;
  virtual void exitPowerExpr(GuaParser::PowerExprContext *ctx) = 0;

  virtual void enterFunctionCallExpr(GuaParser::FunctionCallExprContext *ctx) = 0;
  virtual void exitFunctionCallExpr(GuaParser::FunctionCallExprContext *ctx) = 0;

  virtual void enterMulDivExpr(GuaParser::MulDivExprContext *ctx) = 0;
  virtual void exitMulDivExpr(GuaParser::MulDivExprContext *ctx) = 0;

  virtual void enterEqualityExpr(GuaParser::EqualityExprContext *ctx) = 0;
  virtual void exitEqualityExpr(GuaParser::EqualityExprContext *ctx) = 0;

  virtual void enterNewExpr(GuaParser::NewExprContext *ctx) = 0;
  virtual void exitNewExpr(GuaParser::NewExprContext *ctx) = 0;

  virtual void enterIntExpr(GuaParser::IntExprContext *ctx) = 0;
  virtual void exitIntExpr(GuaParser::IntExprContext *ctx) = 0;

  virtual void enterMemberFunctionCallExpr(GuaParser::MemberFunctionCallExprContext *ctx) = 0;
  virtual void exitMemberFunctionCallExpr(GuaParser::MemberFunctionCallExprContext *ctx) = 0;

  virtual void enterParenExpr(GuaParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(GuaParser::ParenExprContext *ctx) = 0;

  virtual void enterMemberAccessExpr(GuaParser::MemberAccessExprContext *ctx) = 0;
  virtual void exitMemberAccessExpr(GuaParser::MemberAccessExprContext *ctx) = 0;

  virtual void enterAddSubExpr(GuaParser::AddSubExprContext *ctx) = 0;
  virtual void exitAddSubExpr(GuaParser::AddSubExprContext *ctx) = 0;

  virtual void enterArgList(GuaParser::ArgListContext *ctx) = 0;
  virtual void exitArgList(GuaParser::ArgListContext *ctx) = 0;


};

