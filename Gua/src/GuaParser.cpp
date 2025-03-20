
// Generated from Gua.g4 by ANTLR 4.13.2


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
      "prog", "functionDecl", "paramList", "block", "varDecl", "statement", 
      "exprStmt", "returnStmt", "expression"
    },
    std::vector<std::string>{
      "", "'function'", "'('", "')'", "','", "'{'", "'}'", "'var'", "'='", 
      "';'", "'return'", "'+'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "ID", "INT", "DOUBLE", 
      "STRING", "WS", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,17,92,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,1,0,1,0,5,0,21,8,0,10,0,12,0,24,9,0,1,0,1,0,1,1,1,1,1,1,1,
  	1,3,1,32,8,1,1,1,1,1,1,1,1,2,1,2,1,2,5,2,40,8,2,10,2,12,2,43,9,2,1,3,
  	1,3,5,3,47,8,3,10,3,12,3,50,9,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,
  	5,1,5,1,5,3,5,64,8,5,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,3,8,82,8,8,1,8,1,8,1,8,5,8,87,8,8,10,8,12,8,90,9,8,1,
  	8,0,1,16,9,0,2,4,6,8,10,12,14,16,0,0,95,0,22,1,0,0,0,2,27,1,0,0,0,4,36,
  	1,0,0,0,6,44,1,0,0,0,8,53,1,0,0,0,10,63,1,0,0,0,12,65,1,0,0,0,14,68,1,
  	0,0,0,16,81,1,0,0,0,18,21,3,2,1,0,19,21,3,10,5,0,20,18,1,0,0,0,20,19,
  	1,0,0,0,21,24,1,0,0,0,22,20,1,0,0,0,22,23,1,0,0,0,23,25,1,0,0,0,24,22,
  	1,0,0,0,25,26,5,0,0,1,26,1,1,0,0,0,27,28,5,1,0,0,28,29,5,12,0,0,29,31,
  	5,2,0,0,30,32,3,4,2,0,31,30,1,0,0,0,31,32,1,0,0,0,32,33,1,0,0,0,33,34,
  	5,3,0,0,34,35,3,6,3,0,35,3,1,0,0,0,36,41,5,12,0,0,37,38,5,4,0,0,38,40,
  	5,12,0,0,39,37,1,0,0,0,40,43,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,5,
  	1,0,0,0,43,41,1,0,0,0,44,48,5,5,0,0,45,47,3,10,5,0,46,45,1,0,0,0,47,50,
  	1,0,0,0,48,46,1,0,0,0,48,49,1,0,0,0,49,51,1,0,0,0,50,48,1,0,0,0,51,52,
  	5,6,0,0,52,7,1,0,0,0,53,54,5,7,0,0,54,55,5,12,0,0,55,56,5,8,0,0,56,57,
  	3,16,8,0,57,58,5,9,0,0,58,9,1,0,0,0,59,64,3,8,4,0,60,64,3,12,6,0,61,64,
  	3,14,7,0,62,64,3,2,1,0,63,59,1,0,0,0,63,60,1,0,0,0,63,61,1,0,0,0,63,62,
  	1,0,0,0,64,11,1,0,0,0,65,66,3,16,8,0,66,67,5,9,0,0,67,13,1,0,0,0,68,69,
  	5,10,0,0,69,70,3,16,8,0,70,71,5,9,0,0,71,15,1,0,0,0,72,73,6,8,-1,0,73,
  	82,5,12,0,0,74,82,5,13,0,0,75,82,5,14,0,0,76,82,5,15,0,0,77,78,5,2,0,
  	0,78,79,3,16,8,0,79,80,5,3,0,0,80,82,1,0,0,0,81,72,1,0,0,0,81,74,1,0,
  	0,0,81,75,1,0,0,0,81,76,1,0,0,0,81,77,1,0,0,0,82,88,1,0,0,0,83,84,10,
  	2,0,0,84,85,5,11,0,0,85,87,3,16,8,3,86,83,1,0,0,0,87,90,1,0,0,0,88,86,
  	1,0,0,0,88,89,1,0,0,0,89,17,1,0,0,0,90,88,1,0,0,0,8,20,22,31,41,48,63,
  	81,88
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


//----------------- ProgContext ------------------------------------------------------------------

GuaParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GuaParser::ProgContext::EOF() {
  return getToken(GuaParser::EOF, 0);
}

std::vector<GuaParser::FunctionDeclContext *> GuaParser::ProgContext::functionDecl() {
  return getRuleContexts<GuaParser::FunctionDeclContext>();
}

GuaParser::FunctionDeclContext* GuaParser::ProgContext::functionDecl(size_t i) {
  return getRuleContext<GuaParser::FunctionDeclContext>(i);
}

std::vector<GuaParser::StatementContext *> GuaParser::ProgContext::statement() {
  return getRuleContexts<GuaParser::StatementContext>();
}

GuaParser::StatementContext* GuaParser::ProgContext::statement(size_t i) {
  return getRuleContext<GuaParser::StatementContext>(i);
}


size_t GuaParser::ProgContext::getRuleIndex() const {
  return GuaParser::RuleProg;
}


std::any GuaParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::ProgContext* GuaParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, GuaParser::RuleProg);
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
    setState(22);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 62598) != 0)) {
      setState(20);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(18);
        functionDecl();
        break;
      }

      case 2: {
        setState(19);
        statement();
        break;
      }

      default:
        break;
      }
      setState(24);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(25);
    match(GuaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclContext ------------------------------------------------------------------

GuaParser::FunctionDeclContext::FunctionDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GuaParser::FunctionDeclContext::ID() {
  return getToken(GuaParser::ID, 0);
}

GuaParser::BlockContext* GuaParser::FunctionDeclContext::block() {
  return getRuleContext<GuaParser::BlockContext>(0);
}

GuaParser::ParamListContext* GuaParser::FunctionDeclContext::paramList() {
  return getRuleContext<GuaParser::ParamListContext>(0);
}


size_t GuaParser::FunctionDeclContext::getRuleIndex() const {
  return GuaParser::RuleFunctionDecl;
}


std::any GuaParser::FunctionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitFunctionDecl(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::FunctionDeclContext* GuaParser::functionDecl() {
  FunctionDeclContext *_localctx = _tracker.createInstance<FunctionDeclContext>(_ctx, getState());
  enterRule(_localctx, 2, GuaParser::RuleFunctionDecl);
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
    setState(27);
    match(GuaParser::T__0);
    setState(28);
    match(GuaParser::ID);
    setState(29);
    match(GuaParser::T__1);
    setState(31);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GuaParser::ID) {
      setState(30);
      paramList();
    }
    setState(33);
    match(GuaParser::T__2);
    setState(34);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamListContext ------------------------------------------------------------------

GuaParser::ParamListContext::ParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GuaParser::ParamListContext::ID() {
  return getTokens(GuaParser::ID);
}

tree::TerminalNode* GuaParser::ParamListContext::ID(size_t i) {
  return getToken(GuaParser::ID, i);
}


size_t GuaParser::ParamListContext::getRuleIndex() const {
  return GuaParser::RuleParamList;
}


std::any GuaParser::ParamListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitParamList(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::ParamListContext* GuaParser::paramList() {
  ParamListContext *_localctx = _tracker.createInstance<ParamListContext>(_ctx, getState());
  enterRule(_localctx, 4, GuaParser::RuleParamList);
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
    setState(36);
    match(GuaParser::ID);
    setState(41);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GuaParser::T__3) {
      setState(37);
      match(GuaParser::T__3);
      setState(38);
      match(GuaParser::ID);
      setState(43);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
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


std::any GuaParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::BlockContext* GuaParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, GuaParser::RuleBlock);
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
    setState(44);
    match(GuaParser::T__4);
    setState(48);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 62598) != 0)) {
      setState(45);
      statement();
      setState(50);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(51);
    match(GuaParser::T__5);
   
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

tree::TerminalNode* GuaParser::VarDeclContext::ID() {
  return getToken(GuaParser::ID, 0);
}

GuaParser::ExpressionContext* GuaParser::VarDeclContext::expression() {
  return getRuleContext<GuaParser::ExpressionContext>(0);
}


size_t GuaParser::VarDeclContext::getRuleIndex() const {
  return GuaParser::RuleVarDecl;
}


std::any GuaParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::VarDeclContext* GuaParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 8, GuaParser::RuleVarDecl);

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
    match(GuaParser::T__6);
    setState(54);
    match(GuaParser::ID);
    setState(55);
    match(GuaParser::T__7);
    setState(56);
    expression(0);
    setState(57);
    match(GuaParser::T__8);
   
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

GuaParser::ExprStmtContext* GuaParser::StatementContext::exprStmt() {
  return getRuleContext<GuaParser::ExprStmtContext>(0);
}

GuaParser::ReturnStmtContext* GuaParser::StatementContext::returnStmt() {
  return getRuleContext<GuaParser::ReturnStmtContext>(0);
}

GuaParser::FunctionDeclContext* GuaParser::StatementContext::functionDecl() {
  return getRuleContext<GuaParser::FunctionDeclContext>(0);
}


size_t GuaParser::StatementContext::getRuleIndex() const {
  return GuaParser::RuleStatement;
}


std::any GuaParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::StatementContext* GuaParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 10, GuaParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(63);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GuaParser::T__6: {
        enterOuterAlt(_localctx, 1);
        setState(59);
        varDecl();
        break;
      }

      case GuaParser::T__1:
      case GuaParser::ID:
      case GuaParser::INT:
      case GuaParser::DOUBLE:
      case GuaParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(60);
        exprStmt();
        break;
      }

      case GuaParser::T__9: {
        enterOuterAlt(_localctx, 3);
        setState(61);
        returnStmt();
        break;
      }

      case GuaParser::T__0: {
        enterOuterAlt(_localctx, 4);
        setState(62);
        functionDecl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
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


std::any GuaParser::ExprStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitExprStmt(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::ExprStmtContext* GuaParser::exprStmt() {
  ExprStmtContext *_localctx = _tracker.createInstance<ExprStmtContext>(_ctx, getState());
  enterRule(_localctx, 12, GuaParser::RuleExprStmt);

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
    expression(0);
    setState(66);
    match(GuaParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStmtContext ------------------------------------------------------------------

GuaParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuaParser::ExpressionContext* GuaParser::ReturnStmtContext::expression() {
  return getRuleContext<GuaParser::ExpressionContext>(0);
}


size_t GuaParser::ReturnStmtContext::getRuleIndex() const {
  return GuaParser::RuleReturnStmt;
}


std::any GuaParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::ReturnStmtContext* GuaParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 14, GuaParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(GuaParser::T__9);
    setState(69);
    expression(0);
    setState(70);
    match(GuaParser::T__8);
   
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

tree::TerminalNode* GuaParser::ExpressionContext::ID() {
  return getToken(GuaParser::ID, 0);
}

tree::TerminalNode* GuaParser::ExpressionContext::INT() {
  return getToken(GuaParser::INT, 0);
}

tree::TerminalNode* GuaParser::ExpressionContext::DOUBLE() {
  return getToken(GuaParser::DOUBLE, 0);
}

tree::TerminalNode* GuaParser::ExpressionContext::STRING() {
  return getToken(GuaParser::STRING, 0);
}

std::vector<GuaParser::ExpressionContext *> GuaParser::ExpressionContext::expression() {
  return getRuleContexts<GuaParser::ExpressionContext>();
}

GuaParser::ExpressionContext* GuaParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<GuaParser::ExpressionContext>(i);
}


size_t GuaParser::ExpressionContext::getRuleIndex() const {
  return GuaParser::RuleExpression;
}


std::any GuaParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
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
    setState(81);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GuaParser::ID: {
        setState(73);
        match(GuaParser::ID);
        break;
      }

      case GuaParser::INT: {
        setState(74);
        match(GuaParser::INT);
        break;
      }

      case GuaParser::DOUBLE: {
        setState(75);
        match(GuaParser::DOUBLE);
        break;
      }

      case GuaParser::STRING: {
        setState(76);
        match(GuaParser::STRING);
        break;
      }

      case GuaParser::T__1: {
        setState(77);
        match(GuaParser::T__1);
        setState(78);
        expression(0);
        setState(79);
        match(GuaParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(88);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(83);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(84);
        match(GuaParser::T__10);
        setState(85);
        expression(3); 
      }
      setState(90);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
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
    case 0: return precpred(_ctx, 2);

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
