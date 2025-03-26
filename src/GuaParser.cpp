
// Generated from Gua.g4 by ANTLR 4.13.2


#include "GuaListener.h"
#include "GuaVisitor.h"

#include "GuaParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct GuaParserStaticData final {
  GuaParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GuaParserStaticData(const GuaParserStaticData&) = delete;
  GuaParserStaticData(GuaParserStaticData&&) = delete;
  GuaParserStaticData& operator=(const GuaParserStaticData&) = delete;
  GuaParserStaticData& operator=(GuaParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag guaParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<GuaParserStaticData> guaParserStaticData = nullptr;

void guaParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (guaParserStaticData != nullptr) {
    return;
  }
#else
  assert(guaParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GuaParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "varDecl", "assignment", "exprStmt", "ifStmt", 
      "whileStmt", "block", "expression"
    },
    std::vector<std::string>{
      "", "';'", "'var'", "'='", "'if'", "'then'", "'else'", "'end'", "'while'", 
      "'do'", "'{'", "'}'", "'^'", "'=='", "'!='", "'>'", "'<'", "'>='", 
      "'<='", "'('", "')'", "'+'", "'-'", "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "ADD", "SUB", "MUL", "DIV", "IDENTIFIER", "INT", "FLOAT", 
      "STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,28,130,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,1,0,5,0,20,8,0,10,0,12,0,23,9,0,1,0,1,0,1,1,1,1,3,1,29,
  	8,1,1,1,1,1,3,1,33,8,1,1,1,1,1,3,1,37,8,1,1,1,1,1,1,1,3,1,42,8,1,1,2,
  	1,2,1,2,1,2,3,2,48,8,2,1,3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,
  	5,3,5,62,8,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,5,7,74,8,7,10,7,
  	12,7,77,9,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,90,8,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,125,8,
  	8,10,8,12,8,128,9,8,1,8,0,1,16,9,0,2,4,6,8,10,12,14,16,0,0,147,0,21,1,
  	0,0,0,2,41,1,0,0,0,4,43,1,0,0,0,6,49,1,0,0,0,8,53,1,0,0,0,10,55,1,0,0,
  	0,12,65,1,0,0,0,14,71,1,0,0,0,16,89,1,0,0,0,18,20,3,2,1,0,19,18,1,0,0,
  	0,20,23,1,0,0,0,21,19,1,0,0,0,21,22,1,0,0,0,22,24,1,0,0,0,23,21,1,0,0,
  	0,24,25,5,0,0,1,25,1,1,0,0,0,26,28,3,4,2,0,27,29,5,1,0,0,28,27,1,0,0,
  	0,28,29,1,0,0,0,29,42,1,0,0,0,30,32,3,6,3,0,31,33,5,1,0,0,32,31,1,0,0,
  	0,32,33,1,0,0,0,33,42,1,0,0,0,34,36,3,8,4,0,35,37,5,1,0,0,36,35,1,0,0,
  	0,36,37,1,0,0,0,37,42,1,0,0,0,38,42,3,10,5,0,39,42,3,12,6,0,40,42,3,14,
  	7,0,41,26,1,0,0,0,41,30,1,0,0,0,41,34,1,0,0,0,41,38,1,0,0,0,41,39,1,0,
  	0,0,41,40,1,0,0,0,42,3,1,0,0,0,43,44,5,2,0,0,44,47,5,25,0,0,45,46,5,3,
  	0,0,46,48,3,16,8,0,47,45,1,0,0,0,47,48,1,0,0,0,48,5,1,0,0,0,49,50,5,25,
  	0,0,50,51,5,3,0,0,51,52,3,16,8,0,52,7,1,0,0,0,53,54,3,16,8,0,54,9,1,0,
  	0,0,55,56,5,4,0,0,56,57,3,16,8,0,57,58,5,5,0,0,58,61,3,2,1,0,59,60,5,
  	6,0,0,60,62,3,2,1,0,61,59,1,0,0,0,61,62,1,0,0,0,62,63,1,0,0,0,63,64,5,
  	7,0,0,64,11,1,0,0,0,65,66,5,8,0,0,66,67,3,16,8,0,67,68,5,9,0,0,68,69,
  	3,2,1,0,69,70,5,7,0,0,70,13,1,0,0,0,71,75,5,10,0,0,72,74,3,2,1,0,73,72,
  	1,0,0,0,74,77,1,0,0,0,75,73,1,0,0,0,75,76,1,0,0,0,76,78,1,0,0,0,77,75,
  	1,0,0,0,78,79,5,11,0,0,79,15,1,0,0,0,80,81,6,8,-1,0,81,90,5,25,0,0,82,
  	90,5,26,0,0,83,90,5,27,0,0,84,90,5,28,0,0,85,86,5,19,0,0,86,87,3,16,8,
  	0,87,88,5,20,0,0,88,90,1,0,0,0,89,80,1,0,0,0,89,82,1,0,0,0,89,83,1,0,
  	0,0,89,84,1,0,0,0,89,85,1,0,0,0,90,126,1,0,0,0,91,92,10,16,0,0,92,93,
  	5,12,0,0,93,125,3,16,8,17,94,95,10,15,0,0,95,96,5,23,0,0,96,125,3,16,
  	8,16,97,98,10,14,0,0,98,99,5,24,0,0,99,125,3,16,8,15,100,101,10,13,0,
  	0,101,102,5,21,0,0,102,125,3,16,8,14,103,104,10,12,0,0,104,105,5,22,0,
  	0,105,125,3,16,8,13,106,107,10,11,0,0,107,108,5,13,0,0,108,125,3,16,8,
  	12,109,110,10,10,0,0,110,111,5,14,0,0,111,125,3,16,8,11,112,113,10,9,
  	0,0,113,114,5,15,0,0,114,125,3,16,8,10,115,116,10,8,0,0,116,117,5,16,
  	0,0,117,125,3,16,8,9,118,119,10,7,0,0,119,120,5,17,0,0,120,125,3,16,8,
  	8,121,122,10,6,0,0,122,123,5,18,0,0,123,125,3,16,8,7,124,91,1,0,0,0,124,
  	94,1,0,0,0,124,97,1,0,0,0,124,100,1,0,0,0,124,103,1,0,0,0,124,106,1,0,
  	0,0,124,109,1,0,0,0,124,112,1,0,0,0,124,115,1,0,0,0,124,118,1,0,0,0,124,
  	121,1,0,0,0,125,128,1,0,0,0,126,124,1,0,0,0,126,127,1,0,0,0,127,17,1,
  	0,0,0,128,126,1,0,0,0,11,21,28,32,36,41,47,61,75,89,124,126
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  guaParserStaticData = std::move(staticData);
}

}

GuaParser::GuaParser(TokenStream *input) : GuaParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

GuaParser::GuaParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  GuaParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *guaParserStaticData->atn, guaParserStaticData->decisionToDFA, guaParserStaticData->sharedContextCache, options);
}

GuaParser::~GuaParser() {
  delete _interpreter;
}

const atn::ATN& GuaParser::getATN() const {
  return *guaParserStaticData->atn;
}

std::string GuaParser::getGrammarFileName() const {
  return "Gua.g4";
}

const std::vector<std::string>& GuaParser::getRuleNames() const {
  return guaParserStaticData->ruleNames;
}

const dfa::Vocabulary& GuaParser::getVocabulary() const {
  return guaParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView GuaParser::getSerializedATN() const {
  return guaParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

GuaParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GuaParser::ProgramContext::EOF() {
  return getToken(GuaParser::EOF, 0);
}

std::vector<GuaParser::StatementContext *> GuaParser::ProgramContext::statement() {
  return getRuleContexts<GuaParser::StatementContext>();
}

GuaParser::StatementContext* GuaParser::ProgramContext::statement(size_t i) {
  return getRuleContext<GuaParser::StatementContext>(i);
}


size_t GuaParser::ProgramContext::getRuleIndex() const {
  return GuaParser::RuleProgram;
}

void GuaParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void GuaParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any GuaParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::ProgramContext* GuaParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, GuaParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(21);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 503842068) != 0)) {
      setState(18);
      statement();
      setState(23);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(24);
    match(GuaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

GuaParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuaParser::VarDeclContext* GuaParser::StatementContext::varDecl() {
  return getRuleContext<GuaParser::VarDeclContext>(0);
}

GuaParser::AssignmentContext* GuaParser::StatementContext::assignment() {
  return getRuleContext<GuaParser::AssignmentContext>(0);
}

GuaParser::ExprStmtContext* GuaParser::StatementContext::exprStmt() {
  return getRuleContext<GuaParser::ExprStmtContext>(0);
}

GuaParser::IfStmtContext* GuaParser::StatementContext::ifStmt() {
  return getRuleContext<GuaParser::IfStmtContext>(0);
}

GuaParser::WhileStmtContext* GuaParser::StatementContext::whileStmt() {
  return getRuleContext<GuaParser::WhileStmtContext>(0);
}

GuaParser::BlockContext* GuaParser::StatementContext::block() {
  return getRuleContext<GuaParser::BlockContext>(0);
}


size_t GuaParser::StatementContext::getRuleIndex() const {
  return GuaParser::RuleStatement;
}

void GuaParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void GuaParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any GuaParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::StatementContext* GuaParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, GuaParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(41);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(26);
      varDecl();
      setState(28);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GuaParser::T__0) {
        setState(27);
        match(GuaParser::T__0);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(30);
      assignment();
      setState(32);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GuaParser::T__0) {
        setState(31);
        match(GuaParser::T__0);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(34);
      exprStmt();
      setState(36);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GuaParser::T__0) {
        setState(35);
        match(GuaParser::T__0);
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(38);
      ifStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(39);
      whileStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(40);
      block();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

GuaParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GuaParser::VarDeclContext::IDENTIFIER() {
  return getToken(GuaParser::IDENTIFIER, 0);
}

GuaParser::ExpressionContext* GuaParser::VarDeclContext::expression() {
  return getRuleContext<GuaParser::ExpressionContext>(0);
}


size_t GuaParser::VarDeclContext::getRuleIndex() const {
  return GuaParser::RuleVarDecl;
}

void GuaParser::VarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDecl(this);
}

void GuaParser::VarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDecl(this);
}


std::any GuaParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::VarDeclContext* GuaParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, GuaParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    match(GuaParser::T__1);
    setState(44);
    match(GuaParser::IDENTIFIER);
    setState(47);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GuaParser::T__2) {
      setState(45);
      match(GuaParser::T__2);
      setState(46);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

GuaParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GuaParser::AssignmentContext::IDENTIFIER() {
  return getToken(GuaParser::IDENTIFIER, 0);
}

GuaParser::ExpressionContext* GuaParser::AssignmentContext::expression() {
  return getRuleContext<GuaParser::ExpressionContext>(0);
}


size_t GuaParser::AssignmentContext::getRuleIndex() const {
  return GuaParser::RuleAssignment;
}

void GuaParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void GuaParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any GuaParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::AssignmentContext* GuaParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 6, GuaParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    match(GuaParser::IDENTIFIER);
    setState(50);
    match(GuaParser::T__2);
    setState(51);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprStmtContext ------------------------------------------------------------------

GuaParser::ExprStmtContext::ExprStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuaParser::ExpressionContext* GuaParser::ExprStmtContext::expression() {
  return getRuleContext<GuaParser::ExpressionContext>(0);
}


size_t GuaParser::ExprStmtContext::getRuleIndex() const {
  return GuaParser::RuleExprStmt;
}

void GuaParser::ExprStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprStmt(this);
}

void GuaParser::ExprStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprStmt(this);
}


std::any GuaParser::ExprStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitExprStmt(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::ExprStmtContext* GuaParser::exprStmt() {
  ExprStmtContext *_localctx = _tracker.createInstance<ExprStmtContext>(_ctx, getState());
  enterRule(_localctx, 8, GuaParser::RuleExprStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtContext ------------------------------------------------------------------

GuaParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuaParser::ExpressionContext* GuaParser::IfStmtContext::expression() {
  return getRuleContext<GuaParser::ExpressionContext>(0);
}

std::vector<GuaParser::StatementContext *> GuaParser::IfStmtContext::statement() {
  return getRuleContexts<GuaParser::StatementContext>();
}

GuaParser::StatementContext* GuaParser::IfStmtContext::statement(size_t i) {
  return getRuleContext<GuaParser::StatementContext>(i);
}


size_t GuaParser::IfStmtContext::getRuleIndex() const {
  return GuaParser::RuleIfStmt;
}

void GuaParser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}

void GuaParser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}


std::any GuaParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::IfStmtContext* GuaParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 10, GuaParser::RuleIfStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    match(GuaParser::T__3);
    setState(56);
    expression(0);
    setState(57);
    match(GuaParser::T__4);
    setState(58);
    statement();
    setState(61);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GuaParser::T__5) {
      setState(59);
      match(GuaParser::T__5);
      setState(60);
      statement();
    }
    setState(63);
    match(GuaParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStmtContext ------------------------------------------------------------------

GuaParser::WhileStmtContext::WhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuaParser::ExpressionContext* GuaParser::WhileStmtContext::expression() {
  return getRuleContext<GuaParser::ExpressionContext>(0);
}

GuaParser::StatementContext* GuaParser::WhileStmtContext::statement() {
  return getRuleContext<GuaParser::StatementContext>(0);
}


size_t GuaParser::WhileStmtContext::getRuleIndex() const {
  return GuaParser::RuleWhileStmt;
}

void GuaParser::WhileStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStmt(this);
}

void GuaParser::WhileStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStmt(this);
}


std::any GuaParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::WhileStmtContext* GuaParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 12, GuaParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    match(GuaParser::T__7);
    setState(66);
    expression(0);
    setState(67);
    match(GuaParser::T__8);
    setState(68);
    statement();
    setState(69);
    match(GuaParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

GuaParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GuaParser::StatementContext *> GuaParser::BlockContext::statement() {
  return getRuleContexts<GuaParser::StatementContext>();
}

GuaParser::StatementContext* GuaParser::BlockContext::statement(size_t i) {
  return getRuleContext<GuaParser::StatementContext>(i);
}


size_t GuaParser::BlockContext::getRuleIndex() const {
  return GuaParser::RuleBlock;
}

void GuaParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void GuaParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any GuaParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::BlockContext* GuaParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 14, GuaParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(GuaParser::T__9);
    setState(75);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 503842068) != 0)) {
      setState(72);
      statement();
      setState(77);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(78);
    match(GuaParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

GuaParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuaParser::ExpressionContext::getRuleIndex() const {
  return GuaParser::RuleExpression;
}

void GuaParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StringExprContext ------------------------------------------------------------------

tree::TerminalNode* GuaParser::StringExprContext::STRING() {
  return getToken(GuaParser::STRING, 0);
}

GuaParser::StringExprContext::StringExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void GuaParser::StringExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringExpr(this);
}
void GuaParser::StringExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringExpr(this);
}

std::any GuaParser::StringExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitStringExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowerExprContext ------------------------------------------------------------------

std::vector<GuaParser::ExpressionContext *> GuaParser::PowerExprContext::expression() {
  return getRuleContexts<GuaParser::ExpressionContext>();
}

GuaParser::ExpressionContext* GuaParser::PowerExprContext::expression(size_t i) {
  return getRuleContext<GuaParser::ExpressionContext>(i);
}

GuaParser::PowerExprContext::PowerExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void GuaParser::PowerExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowerExpr(this);
}
void GuaParser::PowerExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowerExpr(this);
}

std::any GuaParser::PowerExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitPowerExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FloatExprContext ------------------------------------------------------------------

tree::TerminalNode* GuaParser::FloatExprContext::FLOAT() {
  return getToken(GuaParser::FLOAT, 0);
}

GuaParser::FloatExprContext::FloatExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void GuaParser::FloatExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatExpr(this);
}
void GuaParser::FloatExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatExpr(this);
}

std::any GuaParser::FloatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitFloatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<GuaParser::ExpressionContext *> GuaParser::MulDivExprContext::expression() {
  return getRuleContexts<GuaParser::ExpressionContext>();
}

GuaParser::ExpressionContext* GuaParser::MulDivExprContext::expression(size_t i) {
  return getRuleContext<GuaParser::ExpressionContext>(i);
}

tree::TerminalNode* GuaParser::MulDivExprContext::MUL() {
  return getToken(GuaParser::MUL, 0);
}

tree::TerminalNode* GuaParser::MulDivExprContext::DIV() {
  return getToken(GuaParser::DIV, 0);
}

GuaParser::MulDivExprContext::MulDivExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void GuaParser::MulDivExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDivExpr(this);
}
void GuaParser::MulDivExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDivExpr(this);
}

std::any GuaParser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityExprContext ------------------------------------------------------------------

std::vector<GuaParser::ExpressionContext *> GuaParser::EqualityExprContext::expression() {
  return getRuleContexts<GuaParser::ExpressionContext>();
}

GuaParser::ExpressionContext* GuaParser::EqualityExprContext::expression(size_t i) {
  return getRuleContext<GuaParser::ExpressionContext>(i);
}

GuaParser::EqualityExprContext::EqualityExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void GuaParser::EqualityExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityExpr(this);
}
void GuaParser::EqualityExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityExpr(this);
}

std::any GuaParser::EqualityExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitEqualityExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdExprContext ------------------------------------------------------------------

tree::TerminalNode* GuaParser::IdExprContext::IDENTIFIER() {
  return getToken(GuaParser::IDENTIFIER, 0);
}

GuaParser::IdExprContext::IdExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void GuaParser::IdExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdExpr(this);
}
void GuaParser::IdExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdExpr(this);
}

std::any GuaParser::IdExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitIdExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntExprContext ------------------------------------------------------------------

tree::TerminalNode* GuaParser::IntExprContext::INT() {
  return getToken(GuaParser::INT, 0);
}

GuaParser::IntExprContext::IntExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void GuaParser::IntExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntExpr(this);
}
void GuaParser::IntExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntExpr(this);
}

std::any GuaParser::IntExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitIntExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelationalExprContext ------------------------------------------------------------------

std::vector<GuaParser::ExpressionContext *> GuaParser::RelationalExprContext::expression() {
  return getRuleContexts<GuaParser::ExpressionContext>();
}

GuaParser::ExpressionContext* GuaParser::RelationalExprContext::expression(size_t i) {
  return getRuleContext<GuaParser::ExpressionContext>(i);
}

GuaParser::RelationalExprContext::RelationalExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void GuaParser::RelationalExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpr(this);
}
void GuaParser::RelationalExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpr(this);
}

std::any GuaParser::RelationalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitRelationalExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

GuaParser::ExpressionContext* GuaParser::ParenExprContext::expression() {
  return getRuleContext<GuaParser::ExpressionContext>(0);
}

GuaParser::ParenExprContext::ParenExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void GuaParser::ParenExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpr(this);
}
void GuaParser::ParenExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpr(this);
}

std::any GuaParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<GuaParser::ExpressionContext *> GuaParser::AddSubExprContext::expression() {
  return getRuleContexts<GuaParser::ExpressionContext>();
}

GuaParser::ExpressionContext* GuaParser::AddSubExprContext::expression(size_t i) {
  return getRuleContext<GuaParser::ExpressionContext>(i);
}

tree::TerminalNode* GuaParser::AddSubExprContext::ADD() {
  return getToken(GuaParser::ADD, 0);
}

tree::TerminalNode* GuaParser::AddSubExprContext::SUB() {
  return getToken(GuaParser::SUB, 0);
}

GuaParser::AddSubExprContext::AddSubExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void GuaParser::AddSubExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSubExpr(this);
}
void GuaParser::AddSubExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSubExpr(this);
}

std::any GuaParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::ExpressionContext* GuaParser::expression() {
   return expression(0);
}

GuaParser::ExpressionContext* GuaParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GuaParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  GuaParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, GuaParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(89);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GuaParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<IdExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(81);
        match(GuaParser::IDENTIFIER);
        break;
      }

      case GuaParser::INT: {
        _localctx = _tracker.createInstance<IntExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(82);
        match(GuaParser::INT);
        break;
      }

      case GuaParser::FLOAT: {
        _localctx = _tracker.createInstance<FloatExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(83);
        match(GuaParser::FLOAT);
        break;
      }

      case GuaParser::STRING: {
        _localctx = _tracker.createInstance<StringExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(84);
        match(GuaParser::STRING);
        break;
      }

      case GuaParser::T__18: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(85);
        match(GuaParser::T__18);
        setState(86);
        expression(0);
        setState(87);
        match(GuaParser::T__19);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(126);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(124);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(91);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(92);
          match(GuaParser::T__11);
          setState(93);
          expression(17);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(94);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(95);
          match(GuaParser::MUL);
          setState(96);
          expression(16);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(97);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(98);
          match(GuaParser::DIV);
          setState(99);
          expression(15);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(100);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(101);
          match(GuaParser::ADD);
          setState(102);
          expression(14);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(103);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(104);
          match(GuaParser::SUB);
          setState(105);
          expression(13);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<EqualityExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(106);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(107);
          match(GuaParser::T__12);
          setState(108);
          expression(12);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<EqualityExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(109);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(110);
          match(GuaParser::T__13);
          setState(111);
          expression(11);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(112);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(113);
          match(GuaParser::T__14);
          setState(114);
          expression(10);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(115);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(116);
          match(GuaParser::T__15);
          setState(117);
          expression(9);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(118);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(119);
          match(GuaParser::T__16);
          setState(120);
          expression(8);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(121);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(122);
          match(GuaParser::T__17);
          setState(123);
          expression(7);
          break;
        }

        default:
          break;
        } 
      }
      setState(128);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool GuaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 8: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool GuaParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 16);
    case 1: return precpred(_ctx, 15);
    case 2: return precpred(_ctx, 14);
    case 3: return precpred(_ctx, 13);
    case 4: return precpred(_ctx, 12);
    case 5: return precpred(_ctx, 11);
    case 6: return precpred(_ctx, 10);
    case 7: return precpred(_ctx, 9);
    case 8: return precpred(_ctx, 8);
    case 9: return precpred(_ctx, 7);
    case 10: return precpred(_ctx, 6);

  default:
    break;
  }
  return true;
}

void GuaParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  guaParserInitialize();
#else
  ::antlr4::internal::call_once(guaParserOnceFlag, guaParserInitialize);
#endif
}
