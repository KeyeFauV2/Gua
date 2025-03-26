
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

    virtual std::any visitIncludeStmt(GuaParser::IncludeStmtContext *context) = 0;

    virtual std::any visitVarDecl(GuaParser::VarDeclContext *context) = 0;

    virtual std::any visitAssignment(GuaParser::AssignmentContext *context) = 0;

    virtual std::any visitExprStmt(GuaParser::ExprStmtContext *context) = 0;

    virtual std::any visitIfStmt(GuaParser::IfStmtContext *context) = 0;

    virtual std::any visitWhileStmt(GuaParser::WhileStmtContext *context) = 0;

    virtual std::any visitBlock(GuaParser::BlockContext *context) = 0;

    virtual std::any visitFunctionDecl(GuaParser::FunctionDeclContext *context) = 0;

    virtual std::any visitParamList(GuaParser::ParamListContext *context) = 0;

    virtual std::any visitClassDecl(GuaParser::ClassDeclContext *context) = 0;

    virtual std::any visitClassBody(GuaParser::ClassBodyContext *context) = 0;

    virtual std::any visitConstructorDecl(GuaParser::ConstructorDeclContext *context) = 0;

    virtual std::any visitDeconstructorDecl(GuaParser::DeconstructorDeclContext *context) = 0;

    virtual std::any visitInterfaceImplDecl(GuaParser::InterfaceImplDeclContext *context) = 0;

    virtual std::any visitInterfaceDecl(GuaParser::InterfaceDeclContext *context) = 0;

    virtual std::any visitInterfaceBody(GuaParser::InterfaceBodyContext *context) = 0;

    virtual std::any visitFunctionSignature(GuaParser::FunctionSignatureContext *context) = 0;

    virtual std::any visitStringExpr(GuaParser::StringExprContext *context) = 0;

    virtual std::any visitFloatExpr(GuaParser::FloatExprContext *context) = 0;

    virtual std::any visitIdExpr(GuaParser::IdExprContext *context) = 0;

    virtual std::any visitRelationalExpr(GuaParser::RelationalExprContext *context) = 0;

    virtual std::any visitPowerExpr(GuaParser::PowerExprContext *context) = 0;

    virtual std::any visitFunctionCallExpr(GuaParser::FunctionCallExprContext *context) = 0;

    virtual std::any visitMulDivExpr(GuaParser::MulDivExprContext *context) = 0;

    virtual std::any visitEqualityExpr(GuaParser::EqualityExprContext *context) = 0;

    virtual std::any visitNewExpr(GuaParser::NewExprContext *context) = 0;

    virtual std::any visitIntExpr(GuaParser::IntExprContext *context) = 0;

    virtual std::any visitMemberFunctionCallExpr(GuaParser::MemberFunctionCallExprContext *context) = 0;

    virtual std::any visitParenExpr(GuaParser::ParenExprContext *context) = 0;

    virtual std::any visitMemberAccessExpr(GuaParser::MemberAccessExprContext *context) = 0;

    virtual std::any visitAddSubExpr(GuaParser::AddSubExprContext *context) = 0;

    virtual std::any visitArgList(GuaParser::ArgListContext *context) = 0;


};

