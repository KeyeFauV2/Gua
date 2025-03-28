
// Generated from Gua.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "GuaListener.h"


/**
 * This class provides an empty implementation of GuaListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  GuaBaseListener : public GuaListener {
public:

  virtual void enterProgram(GuaParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(GuaParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(GuaParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(GuaParser::StatementContext * /*ctx*/) override { }

  virtual void enterIncludeStmt(GuaParser::IncludeStmtContext * /*ctx*/) override { }
  virtual void exitIncludeStmt(GuaParser::IncludeStmtContext * /*ctx*/) override { }

  virtual void enterVarDecl(GuaParser::VarDeclContext * /*ctx*/) override { }
  virtual void exitVarDecl(GuaParser::VarDeclContext * /*ctx*/) override { }

  virtual void enterAssignment(GuaParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(GuaParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterExprStmt(GuaParser::ExprStmtContext * /*ctx*/) override { }
  virtual void exitExprStmt(GuaParser::ExprStmtContext * /*ctx*/) override { }

  virtual void enterIfStmt(GuaParser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(GuaParser::IfStmtContext * /*ctx*/) override { }

  virtual void enterWhileStmt(GuaParser::WhileStmtContext * /*ctx*/) override { }
  virtual void exitWhileStmt(GuaParser::WhileStmtContext * /*ctx*/) override { }

  virtual void enterBlock(GuaParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(GuaParser::BlockContext * /*ctx*/) override { }

  virtual void enterFunctionDecl(GuaParser::FunctionDeclContext * /*ctx*/) override { }
  virtual void exitFunctionDecl(GuaParser::FunctionDeclContext * /*ctx*/) override { }

  virtual void enterParamList(GuaParser::ParamListContext * /*ctx*/) override { }
  virtual void exitParamList(GuaParser::ParamListContext * /*ctx*/) override { }

  virtual void enterClassDecl(GuaParser::ClassDeclContext * /*ctx*/) override { }
  virtual void exitClassDecl(GuaParser::ClassDeclContext * /*ctx*/) override { }

  virtual void enterClassBody(GuaParser::ClassBodyContext * /*ctx*/) override { }
  virtual void exitClassBody(GuaParser::ClassBodyContext * /*ctx*/) override { }

  virtual void enterConstructorDecl(GuaParser::ConstructorDeclContext * /*ctx*/) override { }
  virtual void exitConstructorDecl(GuaParser::ConstructorDeclContext * /*ctx*/) override { }

  virtual void enterDeconstructorDecl(GuaParser::DeconstructorDeclContext * /*ctx*/) override { }
  virtual void exitDeconstructorDecl(GuaParser::DeconstructorDeclContext * /*ctx*/) override { }

  virtual void enterInterfaceImplDecl(GuaParser::InterfaceImplDeclContext * /*ctx*/) override { }
  virtual void exitInterfaceImplDecl(GuaParser::InterfaceImplDeclContext * /*ctx*/) override { }

  virtual void enterInterfaceDecl(GuaParser::InterfaceDeclContext * /*ctx*/) override { }
  virtual void exitInterfaceDecl(GuaParser::InterfaceDeclContext * /*ctx*/) override { }

  virtual void enterInterfaceBody(GuaParser::InterfaceBodyContext * /*ctx*/) override { }
  virtual void exitInterfaceBody(GuaParser::InterfaceBodyContext * /*ctx*/) override { }

  virtual void enterFunctionSignature(GuaParser::FunctionSignatureContext * /*ctx*/) override { }
  virtual void exitFunctionSignature(GuaParser::FunctionSignatureContext * /*ctx*/) override { }

  virtual void enterStringExpr(GuaParser::StringExprContext * /*ctx*/) override { }
  virtual void exitStringExpr(GuaParser::StringExprContext * /*ctx*/) override { }

  virtual void enterFloatExpr(GuaParser::FloatExprContext * /*ctx*/) override { }
  virtual void exitFloatExpr(GuaParser::FloatExprContext * /*ctx*/) override { }

  virtual void enterIdExpr(GuaParser::IdExprContext * /*ctx*/) override { }
  virtual void exitIdExpr(GuaParser::IdExprContext * /*ctx*/) override { }

  virtual void enterRelationalExpr(GuaParser::RelationalExprContext * /*ctx*/) override { }
  virtual void exitRelationalExpr(GuaParser::RelationalExprContext * /*ctx*/) override { }

  virtual void enterPowerExpr(GuaParser::PowerExprContext * /*ctx*/) override { }
  virtual void exitPowerExpr(GuaParser::PowerExprContext * /*ctx*/) override { }

  virtual void enterFunctionCallExpr(GuaParser::FunctionCallExprContext * /*ctx*/) override { }
  virtual void exitFunctionCallExpr(GuaParser::FunctionCallExprContext * /*ctx*/) override { }

  virtual void enterMulDivExpr(GuaParser::MulDivExprContext * /*ctx*/) override { }
  virtual void exitMulDivExpr(GuaParser::MulDivExprContext * /*ctx*/) override { }

  virtual void enterEqualityExpr(GuaParser::EqualityExprContext * /*ctx*/) override { }
  virtual void exitEqualityExpr(GuaParser::EqualityExprContext * /*ctx*/) override { }

  virtual void enterNewExpr(GuaParser::NewExprContext * /*ctx*/) override { }
  virtual void exitNewExpr(GuaParser::NewExprContext * /*ctx*/) override { }

  virtual void enterIntExpr(GuaParser::IntExprContext * /*ctx*/) override { }
  virtual void exitIntExpr(GuaParser::IntExprContext * /*ctx*/) override { }

  virtual void enterMemberFunctionCallExpr(GuaParser::MemberFunctionCallExprContext * /*ctx*/) override { }
  virtual void exitMemberFunctionCallExpr(GuaParser::MemberFunctionCallExprContext * /*ctx*/) override { }

  virtual void enterParenExpr(GuaParser::ParenExprContext * /*ctx*/) override { }
  virtual void exitParenExpr(GuaParser::ParenExprContext * /*ctx*/) override { }

  virtual void enterMemberAccessExpr(GuaParser::MemberAccessExprContext * /*ctx*/) override { }
  virtual void exitMemberAccessExpr(GuaParser::MemberAccessExprContext * /*ctx*/) override { }

  virtual void enterAddSubExpr(GuaParser::AddSubExprContext * /*ctx*/) override { }
  virtual void exitAddSubExpr(GuaParser::AddSubExprContext * /*ctx*/) override { }

  virtual void enterArgList(GuaParser::ArgListContext * /*ctx*/) override { }
  virtual void exitArgList(GuaParser::ArgListContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

