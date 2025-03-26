
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
      "program", "statement", "includeStmt", "varDecl", "assignment", "exprStmt", 
      "ifStmt", "whileStmt", "block", "functionDecl", "paramList", "classDecl", 
      "classBody", "constructorDecl", "deconstructorDecl", "interfaceImplDecl", 
      "interfaceDecl", "interfaceBody", "functionSignature", "expression", 
      "argList"
    },
    std::vector<std::string>{
      "", "';'", "'include'", "'var'", "'='", "'if'", "'then'", "'else'", 
      "'end'", "'while'", "'do'", "'begin'", "'function'", "'('", "')'", 
      "','", "'class'", "':'", "'constructor'", "'deconstructor'", "'implements'", 
      "'interface'", "'^'", "'=='", "'!='", "'>'", "'<'", "'>='", "'<='", 
      "'new'", "'.'", "'+'", "'-'", "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "ADD", "SUB", 
      "MUL", "DIV", "IDENTIFIER", "INT", "FLOAT", "STRING", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,39,271,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,5,
  	0,44,8,0,10,0,12,0,47,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,67,8,1,1,2,1,2,1,2,1,3,1,3,1,3,1,3,3,
  	3,76,8,3,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,3,6,90,8,6,1,
  	6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,5,8,102,8,8,10,8,12,8,105,9,8,1,
  	8,1,8,1,9,1,9,1,9,1,9,3,9,113,8,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,5,10,
  	122,8,10,10,10,12,10,125,9,10,1,11,1,11,1,11,1,11,3,11,131,8,11,1,11,
  	1,11,5,11,135,8,11,10,11,12,11,138,9,11,1,11,1,11,1,11,1,12,1,12,1,12,
  	1,12,1,12,5,12,148,8,12,10,12,12,12,151,9,12,1,13,1,13,1,13,3,13,156,
  	8,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,
  	1,16,1,16,1,16,1,16,1,16,1,17,5,17,177,8,17,10,17,12,17,180,9,17,1,18,
  	1,18,1,18,1,18,3,18,186,8,18,1,18,1,18,1,19,1,19,1,19,1,19,3,19,194,8,
  	19,1,19,1,19,1,19,1,19,1,19,3,19,201,8,19,1,19,1,19,1,19,1,19,1,19,1,
  	19,1,19,1,19,1,19,3,19,212,8,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,
  	19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,
  	19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,
  	19,1,19,1,19,3,19,252,8,19,1,19,1,19,1,19,1,19,5,19,258,8,19,10,19,12,
  	19,261,9,19,1,20,1,20,1,20,5,20,266,8,20,10,20,12,20,269,9,20,1,20,0,
  	1,38,21,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,0,0,
  	297,0,45,1,0,0,0,2,66,1,0,0,0,4,68,1,0,0,0,6,71,1,0,0,0,8,77,1,0,0,0,
  	10,81,1,0,0,0,12,83,1,0,0,0,14,93,1,0,0,0,16,99,1,0,0,0,18,108,1,0,0,
  	0,20,118,1,0,0,0,22,126,1,0,0,0,24,149,1,0,0,0,26,152,1,0,0,0,28,161,
  	1,0,0,0,30,167,1,0,0,0,32,170,1,0,0,0,34,178,1,0,0,0,36,181,1,0,0,0,38,
  	211,1,0,0,0,40,262,1,0,0,0,42,44,3,2,1,0,43,42,1,0,0,0,44,47,1,0,0,0,
  	45,43,1,0,0,0,45,46,1,0,0,0,46,48,1,0,0,0,47,45,1,0,0,0,48,49,5,0,0,1,
  	49,1,1,0,0,0,50,51,3,6,3,0,51,52,5,1,0,0,52,67,1,0,0,0,53,54,3,8,4,0,
  	54,55,5,1,0,0,55,67,1,0,0,0,56,57,3,10,5,0,57,58,5,1,0,0,58,67,1,0,0,
  	0,59,67,3,12,6,0,60,67,3,14,7,0,61,67,3,16,8,0,62,67,3,18,9,0,63,67,3,
  	22,11,0,64,67,3,32,16,0,65,67,3,4,2,0,66,50,1,0,0,0,66,53,1,0,0,0,66,
  	56,1,0,0,0,66,59,1,0,0,0,66,60,1,0,0,0,66,61,1,0,0,0,66,62,1,0,0,0,66,
  	63,1,0,0,0,66,64,1,0,0,0,66,65,1,0,0,0,67,3,1,0,0,0,68,69,5,2,0,0,69,
  	70,5,38,0,0,70,5,1,0,0,0,71,72,5,3,0,0,72,75,5,35,0,0,73,74,5,4,0,0,74,
  	76,3,38,19,0,75,73,1,0,0,0,75,76,1,0,0,0,76,7,1,0,0,0,77,78,5,35,0,0,
  	78,79,5,4,0,0,79,80,3,38,19,0,80,9,1,0,0,0,81,82,3,38,19,0,82,11,1,0,
  	0,0,83,84,5,5,0,0,84,85,3,38,19,0,85,86,5,6,0,0,86,89,3,2,1,0,87,88,5,
  	7,0,0,88,90,3,2,1,0,89,87,1,0,0,0,89,90,1,0,0,0,90,91,1,0,0,0,91,92,5,
  	8,0,0,92,13,1,0,0,0,93,94,5,9,0,0,94,95,3,38,19,0,95,96,5,10,0,0,96,97,
  	3,2,1,0,97,98,5,8,0,0,98,15,1,0,0,0,99,103,5,11,0,0,100,102,3,2,1,0,101,
  	100,1,0,0,0,102,105,1,0,0,0,103,101,1,0,0,0,103,104,1,0,0,0,104,106,1,
  	0,0,0,105,103,1,0,0,0,106,107,5,8,0,0,107,17,1,0,0,0,108,109,5,12,0,0,
  	109,110,5,35,0,0,110,112,5,13,0,0,111,113,3,20,10,0,112,111,1,0,0,0,112,
  	113,1,0,0,0,113,114,1,0,0,0,114,115,5,14,0,0,115,116,3,16,8,0,116,117,
  	5,8,0,0,117,19,1,0,0,0,118,123,5,35,0,0,119,120,5,15,0,0,120,122,5,35,
  	0,0,121,119,1,0,0,0,122,125,1,0,0,0,123,121,1,0,0,0,123,124,1,0,0,0,124,
  	21,1,0,0,0,125,123,1,0,0,0,126,127,5,16,0,0,127,130,5,35,0,0,128,129,
  	5,17,0,0,129,131,5,35,0,0,130,128,1,0,0,0,130,131,1,0,0,0,131,136,1,0,
  	0,0,132,133,5,15,0,0,133,135,5,35,0,0,134,132,1,0,0,0,135,138,1,0,0,0,
  	136,134,1,0,0,0,136,137,1,0,0,0,137,139,1,0,0,0,138,136,1,0,0,0,139,140,
  	3,24,12,0,140,141,5,8,0,0,141,23,1,0,0,0,142,148,3,26,13,0,143,148,3,
  	28,14,0,144,148,3,18,9,0,145,148,3,6,3,0,146,148,3,30,15,0,147,142,1,
  	0,0,0,147,143,1,0,0,0,147,144,1,0,0,0,147,145,1,0,0,0,147,146,1,0,0,0,
  	148,151,1,0,0,0,149,147,1,0,0,0,149,150,1,0,0,0,150,25,1,0,0,0,151,149,
  	1,0,0,0,152,153,5,18,0,0,153,155,5,13,0,0,154,156,3,20,10,0,155,154,1,
  	0,0,0,155,156,1,0,0,0,156,157,1,0,0,0,157,158,5,14,0,0,158,159,3,16,8,
  	0,159,160,5,8,0,0,160,27,1,0,0,0,161,162,5,19,0,0,162,163,5,13,0,0,163,
  	164,5,14,0,0,164,165,3,16,8,0,165,166,5,8,0,0,166,29,1,0,0,0,167,168,
  	5,20,0,0,168,169,5,35,0,0,169,31,1,0,0,0,170,171,5,21,0,0,171,172,5,35,
  	0,0,172,173,3,34,17,0,173,174,5,8,0,0,174,33,1,0,0,0,175,177,3,36,18,
  	0,176,175,1,0,0,0,177,180,1,0,0,0,178,176,1,0,0,0,178,179,1,0,0,0,179,
  	35,1,0,0,0,180,178,1,0,0,0,181,182,5,12,0,0,182,183,5,35,0,0,183,185,
  	5,13,0,0,184,186,3,20,10,0,185,184,1,0,0,0,185,186,1,0,0,0,186,187,1,
  	0,0,0,187,188,5,14,0,0,188,37,1,0,0,0,189,190,6,19,-1,0,190,191,5,35,
  	0,0,191,193,5,13,0,0,192,194,3,40,20,0,193,192,1,0,0,0,193,194,1,0,0,
  	0,194,195,1,0,0,0,195,212,5,14,0,0,196,197,5,29,0,0,197,198,5,35,0,0,
  	198,200,5,13,0,0,199,201,3,40,20,0,200,199,1,0,0,0,200,201,1,0,0,0,201,
  	202,1,0,0,0,202,212,5,14,0,0,203,212,5,35,0,0,204,212,5,36,0,0,205,212,
  	5,37,0,0,206,212,5,38,0,0,207,208,5,13,0,0,208,209,3,38,19,0,209,210,
  	5,14,0,0,210,212,1,0,0,0,211,189,1,0,0,0,211,196,1,0,0,0,211,203,1,0,
  	0,0,211,204,1,0,0,0,211,205,1,0,0,0,211,206,1,0,0,0,211,207,1,0,0,0,212,
  	259,1,0,0,0,213,214,10,20,0,0,214,215,5,22,0,0,215,258,3,38,19,21,216,
  	217,10,19,0,0,217,218,5,33,0,0,218,258,3,38,19,20,219,220,10,18,0,0,220,
  	221,5,34,0,0,221,258,3,38,19,19,222,223,10,17,0,0,223,224,5,31,0,0,224,
  	258,3,38,19,18,225,226,10,16,0,0,226,227,5,32,0,0,227,258,3,38,19,17,
  	228,229,10,15,0,0,229,230,5,23,0,0,230,258,3,38,19,16,231,232,10,14,0,
  	0,232,233,5,24,0,0,233,258,3,38,19,15,234,235,10,13,0,0,235,236,5,25,
  	0,0,236,258,3,38,19,14,237,238,10,12,0,0,238,239,5,26,0,0,239,258,3,38,
  	19,13,240,241,10,11,0,0,241,242,5,27,0,0,242,258,3,38,19,12,243,244,10,
  	10,0,0,244,245,5,28,0,0,245,258,3,38,19,11,246,247,10,7,0,0,247,248,5,
  	30,0,0,248,249,5,35,0,0,249,251,5,13,0,0,250,252,3,40,20,0,251,250,1,
  	0,0,0,251,252,1,0,0,0,252,253,1,0,0,0,253,258,5,14,0,0,254,255,10,6,0,
  	0,255,256,5,30,0,0,256,258,5,35,0,0,257,213,1,0,0,0,257,216,1,0,0,0,257,
  	219,1,0,0,0,257,222,1,0,0,0,257,225,1,0,0,0,257,228,1,0,0,0,257,231,1,
  	0,0,0,257,234,1,0,0,0,257,237,1,0,0,0,257,240,1,0,0,0,257,243,1,0,0,0,
  	257,246,1,0,0,0,257,254,1,0,0,0,258,261,1,0,0,0,259,257,1,0,0,0,259,260,
  	1,0,0,0,260,39,1,0,0,0,261,259,1,0,0,0,262,267,3,38,19,0,263,264,5,15,
  	0,0,264,266,3,38,19,0,265,263,1,0,0,0,266,269,1,0,0,0,267,265,1,0,0,0,
  	267,268,1,0,0,0,268,41,1,0,0,0,269,267,1,0,0,0,21,45,66,75,89,103,112,
  	123,130,136,147,149,155,178,185,193,200,211,251,257,259,267
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
    setState(45);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 515935124012) != 0)) {
      setState(42);
      statement();
      setState(47);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(48);
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

GuaParser::FunctionDeclContext* GuaParser::StatementContext::functionDecl() {
  return getRuleContext<GuaParser::FunctionDeclContext>(0);
}

GuaParser::ClassDeclContext* GuaParser::StatementContext::classDecl() {
  return getRuleContext<GuaParser::ClassDeclContext>(0);
}

GuaParser::InterfaceDeclContext* GuaParser::StatementContext::interfaceDecl() {
  return getRuleContext<GuaParser::InterfaceDeclContext>(0);
}

GuaParser::IncludeStmtContext* GuaParser::StatementContext::includeStmt() {
  return getRuleContext<GuaParser::IncludeStmtContext>(0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(66);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(50);
      varDecl();
      setState(51);
      match(GuaParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(53);
      assignment();
      setState(54);
      match(GuaParser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(56);
      exprStmt();
      setState(57);
      match(GuaParser::T__0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(59);
      ifStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(60);
      whileStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(61);
      block();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(62);
      functionDecl();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(63);
      classDecl();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(64);
      interfaceDecl();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(65);
      includeStmt();
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

//----------------- IncludeStmtContext ------------------------------------------------------------------

GuaParser::IncludeStmtContext::IncludeStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GuaParser::IncludeStmtContext::STRING() {
  return getToken(GuaParser::STRING, 0);
}


size_t GuaParser::IncludeStmtContext::getRuleIndex() const {
  return GuaParser::RuleIncludeStmt;
}

void GuaParser::IncludeStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncludeStmt(this);
}

void GuaParser::IncludeStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncludeStmt(this);
}


std::any GuaParser::IncludeStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitIncludeStmt(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::IncludeStmtContext* GuaParser::includeStmt() {
  IncludeStmtContext *_localctx = _tracker.createInstance<IncludeStmtContext>(_ctx, getState());
  enterRule(_localctx, 4, GuaParser::RuleIncludeStmt);

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
    match(GuaParser::T__1);
    setState(69);
    match(GuaParser::STRING);
   
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
  enterRule(_localctx, 6, GuaParser::RuleVarDecl);
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
    match(GuaParser::T__2);
    setState(72);
    match(GuaParser::IDENTIFIER);
    setState(75);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GuaParser::T__3) {
      setState(73);
      match(GuaParser::T__3);
      setState(74);
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
  enterRule(_localctx, 8, GuaParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(GuaParser::IDENTIFIER);
    setState(78);
    match(GuaParser::T__3);
    setState(79);
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
  enterRule(_localctx, 10, GuaParser::RuleExprStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
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
  enterRule(_localctx, 12, GuaParser::RuleIfStmt);
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
    setState(83);
    match(GuaParser::T__4);
    setState(84);
    expression(0);
    setState(85);
    match(GuaParser::T__5);
    setState(86);
    statement();
    setState(89);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GuaParser::T__6) {
      setState(87);
      match(GuaParser::T__6);
      setState(88);
      statement();
    }
    setState(91);
    match(GuaParser::T__7);
   
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
  enterRule(_localctx, 14, GuaParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93);
    match(GuaParser::T__8);
    setState(94);
    expression(0);
    setState(95);
    match(GuaParser::T__9);
    setState(96);
    statement();
    setState(97);
    match(GuaParser::T__7);
   
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
  enterRule(_localctx, 16, GuaParser::RuleBlock);
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
    setState(99);
    match(GuaParser::T__10);
    setState(103);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 515935124012) != 0)) {
      setState(100);
      statement();
      setState(105);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(106);
    match(GuaParser::T__7);
   
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

tree::TerminalNode* GuaParser::FunctionDeclContext::IDENTIFIER() {
  return getToken(GuaParser::IDENTIFIER, 0);
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

void GuaParser::FunctionDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDecl(this);
}

void GuaParser::FunctionDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDecl(this);
}


std::any GuaParser::FunctionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitFunctionDecl(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::FunctionDeclContext* GuaParser::functionDecl() {
  FunctionDeclContext *_localctx = _tracker.createInstance<FunctionDeclContext>(_ctx, getState());
  enterRule(_localctx, 18, GuaParser::RuleFunctionDecl);
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
    setState(108);
    match(GuaParser::T__11);
    setState(109);
    match(GuaParser::IDENTIFIER);
    setState(110);
    match(GuaParser::T__12);
    setState(112);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GuaParser::IDENTIFIER) {
      setState(111);
      paramList();
    }
    setState(114);
    match(GuaParser::T__13);
    setState(115);
    block();
    setState(116);
    match(GuaParser::T__7);
   
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

std::vector<tree::TerminalNode *> GuaParser::ParamListContext::IDENTIFIER() {
  return getTokens(GuaParser::IDENTIFIER);
}

tree::TerminalNode* GuaParser::ParamListContext::IDENTIFIER(size_t i) {
  return getToken(GuaParser::IDENTIFIER, i);
}


size_t GuaParser::ParamListContext::getRuleIndex() const {
  return GuaParser::RuleParamList;
}

void GuaParser::ParamListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamList(this);
}

void GuaParser::ParamListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamList(this);
}


std::any GuaParser::ParamListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitParamList(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::ParamListContext* GuaParser::paramList() {
  ParamListContext *_localctx = _tracker.createInstance<ParamListContext>(_ctx, getState());
  enterRule(_localctx, 20, GuaParser::RuleParamList);
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
    setState(118);
    match(GuaParser::IDENTIFIER);
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GuaParser::T__14) {
      setState(119);
      match(GuaParser::T__14);
      setState(120);
      match(GuaParser::IDENTIFIER);
      setState(125);
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

//----------------- ClassDeclContext ------------------------------------------------------------------

GuaParser::ClassDeclContext::ClassDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GuaParser::ClassDeclContext::IDENTIFIER() {
  return getTokens(GuaParser::IDENTIFIER);
}

tree::TerminalNode* GuaParser::ClassDeclContext::IDENTIFIER(size_t i) {
  return getToken(GuaParser::IDENTIFIER, i);
}

GuaParser::ClassBodyContext* GuaParser::ClassDeclContext::classBody() {
  return getRuleContext<GuaParser::ClassBodyContext>(0);
}


size_t GuaParser::ClassDeclContext::getRuleIndex() const {
  return GuaParser::RuleClassDecl;
}

void GuaParser::ClassDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDecl(this);
}

void GuaParser::ClassDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDecl(this);
}


std::any GuaParser::ClassDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitClassDecl(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::ClassDeclContext* GuaParser::classDecl() {
  ClassDeclContext *_localctx = _tracker.createInstance<ClassDeclContext>(_ctx, getState());
  enterRule(_localctx, 22, GuaParser::RuleClassDecl);
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
    setState(126);
    match(GuaParser::T__15);
    setState(127);
    match(GuaParser::IDENTIFIER);
    setState(130);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GuaParser::T__16) {
      setState(128);
      match(GuaParser::T__16);
      setState(129);
      match(GuaParser::IDENTIFIER);
    }
    setState(136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GuaParser::T__14) {
      setState(132);
      match(GuaParser::T__14);
      setState(133);
      match(GuaParser::IDENTIFIER);
      setState(138);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(139);
    classBody();
    setState(140);
    match(GuaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyContext ------------------------------------------------------------------

GuaParser::ClassBodyContext::ClassBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GuaParser::ConstructorDeclContext *> GuaParser::ClassBodyContext::constructorDecl() {
  return getRuleContexts<GuaParser::ConstructorDeclContext>();
}

GuaParser::ConstructorDeclContext* GuaParser::ClassBodyContext::constructorDecl(size_t i) {
  return getRuleContext<GuaParser::ConstructorDeclContext>(i);
}

std::vector<GuaParser::DeconstructorDeclContext *> GuaParser::ClassBodyContext::deconstructorDecl() {
  return getRuleContexts<GuaParser::DeconstructorDeclContext>();
}

GuaParser::DeconstructorDeclContext* GuaParser::ClassBodyContext::deconstructorDecl(size_t i) {
  return getRuleContext<GuaParser::DeconstructorDeclContext>(i);
}

std::vector<GuaParser::FunctionDeclContext *> GuaParser::ClassBodyContext::functionDecl() {
  return getRuleContexts<GuaParser::FunctionDeclContext>();
}

GuaParser::FunctionDeclContext* GuaParser::ClassBodyContext::functionDecl(size_t i) {
  return getRuleContext<GuaParser::FunctionDeclContext>(i);
}

std::vector<GuaParser::VarDeclContext *> GuaParser::ClassBodyContext::varDecl() {
  return getRuleContexts<GuaParser::VarDeclContext>();
}

GuaParser::VarDeclContext* GuaParser::ClassBodyContext::varDecl(size_t i) {
  return getRuleContext<GuaParser::VarDeclContext>(i);
}

std::vector<GuaParser::InterfaceImplDeclContext *> GuaParser::ClassBodyContext::interfaceImplDecl() {
  return getRuleContexts<GuaParser::InterfaceImplDeclContext>();
}

GuaParser::InterfaceImplDeclContext* GuaParser::ClassBodyContext::interfaceImplDecl(size_t i) {
  return getRuleContext<GuaParser::InterfaceImplDeclContext>(i);
}


size_t GuaParser::ClassBodyContext::getRuleIndex() const {
  return GuaParser::RuleClassBody;
}

void GuaParser::ClassBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassBody(this);
}

void GuaParser::ClassBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassBody(this);
}


std::any GuaParser::ClassBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitClassBody(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::ClassBodyContext* GuaParser::classBody() {
  ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 24, GuaParser::RuleClassBody);
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
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1839112) != 0)) {
      setState(147);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case GuaParser::T__17: {
          setState(142);
          constructorDecl();
          break;
        }

        case GuaParser::T__18: {
          setState(143);
          deconstructorDecl();
          break;
        }

        case GuaParser::T__11: {
          setState(144);
          functionDecl();
          break;
        }

        case GuaParser::T__2: {
          setState(145);
          varDecl();
          break;
        }

        case GuaParser::T__19: {
          setState(146);
          interfaceImplDecl();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(151);
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

//----------------- ConstructorDeclContext ------------------------------------------------------------------

GuaParser::ConstructorDeclContext::ConstructorDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuaParser::BlockContext* GuaParser::ConstructorDeclContext::block() {
  return getRuleContext<GuaParser::BlockContext>(0);
}

GuaParser::ParamListContext* GuaParser::ConstructorDeclContext::paramList() {
  return getRuleContext<GuaParser::ParamListContext>(0);
}


size_t GuaParser::ConstructorDeclContext::getRuleIndex() const {
  return GuaParser::RuleConstructorDecl;
}

void GuaParser::ConstructorDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorDecl(this);
}

void GuaParser::ConstructorDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorDecl(this);
}


std::any GuaParser::ConstructorDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitConstructorDecl(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::ConstructorDeclContext* GuaParser::constructorDecl() {
  ConstructorDeclContext *_localctx = _tracker.createInstance<ConstructorDeclContext>(_ctx, getState());
  enterRule(_localctx, 26, GuaParser::RuleConstructorDecl);
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
    setState(152);
    match(GuaParser::T__17);
    setState(153);
    match(GuaParser::T__12);
    setState(155);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GuaParser::IDENTIFIER) {
      setState(154);
      paramList();
    }
    setState(157);
    match(GuaParser::T__13);
    setState(158);
    block();
    setState(159);
    match(GuaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeconstructorDeclContext ------------------------------------------------------------------

GuaParser::DeconstructorDeclContext::DeconstructorDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuaParser::BlockContext* GuaParser::DeconstructorDeclContext::block() {
  return getRuleContext<GuaParser::BlockContext>(0);
}


size_t GuaParser::DeconstructorDeclContext::getRuleIndex() const {
  return GuaParser::RuleDeconstructorDecl;
}

void GuaParser::DeconstructorDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeconstructorDecl(this);
}

void GuaParser::DeconstructorDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeconstructorDecl(this);
}


std::any GuaParser::DeconstructorDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitDeconstructorDecl(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::DeconstructorDeclContext* GuaParser::deconstructorDecl() {
  DeconstructorDeclContext *_localctx = _tracker.createInstance<DeconstructorDeclContext>(_ctx, getState());
  enterRule(_localctx, 28, GuaParser::RuleDeconstructorDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(GuaParser::T__18);
    setState(162);
    match(GuaParser::T__12);
    setState(163);
    match(GuaParser::T__13);
    setState(164);
    block();
    setState(165);
    match(GuaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceImplDeclContext ------------------------------------------------------------------

GuaParser::InterfaceImplDeclContext::InterfaceImplDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GuaParser::InterfaceImplDeclContext::IDENTIFIER() {
  return getToken(GuaParser::IDENTIFIER, 0);
}


size_t GuaParser::InterfaceImplDeclContext::getRuleIndex() const {
  return GuaParser::RuleInterfaceImplDecl;
}

void GuaParser::InterfaceImplDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceImplDecl(this);
}

void GuaParser::InterfaceImplDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceImplDecl(this);
}


std::any GuaParser::InterfaceImplDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitInterfaceImplDecl(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::InterfaceImplDeclContext* GuaParser::interfaceImplDecl() {
  InterfaceImplDeclContext *_localctx = _tracker.createInstance<InterfaceImplDeclContext>(_ctx, getState());
  enterRule(_localctx, 30, GuaParser::RuleInterfaceImplDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(GuaParser::T__19);
    setState(168);
    match(GuaParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceDeclContext ------------------------------------------------------------------

GuaParser::InterfaceDeclContext::InterfaceDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GuaParser::InterfaceDeclContext::IDENTIFIER() {
  return getToken(GuaParser::IDENTIFIER, 0);
}

GuaParser::InterfaceBodyContext* GuaParser::InterfaceDeclContext::interfaceBody() {
  return getRuleContext<GuaParser::InterfaceBodyContext>(0);
}


size_t GuaParser::InterfaceDeclContext::getRuleIndex() const {
  return GuaParser::RuleInterfaceDecl;
}

void GuaParser::InterfaceDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceDecl(this);
}

void GuaParser::InterfaceDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceDecl(this);
}


std::any GuaParser::InterfaceDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitInterfaceDecl(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::InterfaceDeclContext* GuaParser::interfaceDecl() {
  InterfaceDeclContext *_localctx = _tracker.createInstance<InterfaceDeclContext>(_ctx, getState());
  enterRule(_localctx, 32, GuaParser::RuleInterfaceDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    match(GuaParser::T__20);
    setState(171);
    match(GuaParser::IDENTIFIER);
    setState(172);
    interfaceBody();
    setState(173);
    match(GuaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceBodyContext ------------------------------------------------------------------

GuaParser::InterfaceBodyContext::InterfaceBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GuaParser::FunctionSignatureContext *> GuaParser::InterfaceBodyContext::functionSignature() {
  return getRuleContexts<GuaParser::FunctionSignatureContext>();
}

GuaParser::FunctionSignatureContext* GuaParser::InterfaceBodyContext::functionSignature(size_t i) {
  return getRuleContext<GuaParser::FunctionSignatureContext>(i);
}


size_t GuaParser::InterfaceBodyContext::getRuleIndex() const {
  return GuaParser::RuleInterfaceBody;
}

void GuaParser::InterfaceBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceBody(this);
}

void GuaParser::InterfaceBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceBody(this);
}


std::any GuaParser::InterfaceBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitInterfaceBody(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::InterfaceBodyContext* GuaParser::interfaceBody() {
  InterfaceBodyContext *_localctx = _tracker.createInstance<InterfaceBodyContext>(_ctx, getState());
  enterRule(_localctx, 34, GuaParser::RuleInterfaceBody);
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
    setState(178);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GuaParser::T__11) {
      setState(175);
      functionSignature();
      setState(180);
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

//----------------- FunctionSignatureContext ------------------------------------------------------------------

GuaParser::FunctionSignatureContext::FunctionSignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GuaParser::FunctionSignatureContext::IDENTIFIER() {
  return getToken(GuaParser::IDENTIFIER, 0);
}

GuaParser::ParamListContext* GuaParser::FunctionSignatureContext::paramList() {
  return getRuleContext<GuaParser::ParamListContext>(0);
}


size_t GuaParser::FunctionSignatureContext::getRuleIndex() const {
  return GuaParser::RuleFunctionSignature;
}

void GuaParser::FunctionSignatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionSignature(this);
}

void GuaParser::FunctionSignatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionSignature(this);
}


std::any GuaParser::FunctionSignatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitFunctionSignature(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::FunctionSignatureContext* GuaParser::functionSignature() {
  FunctionSignatureContext *_localctx = _tracker.createInstance<FunctionSignatureContext>(_ctx, getState());
  enterRule(_localctx, 36, GuaParser::RuleFunctionSignature);
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
    setState(181);
    match(GuaParser::T__11);
    setState(182);
    match(GuaParser::IDENTIFIER);
    setState(183);
    match(GuaParser::T__12);
    setState(185);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GuaParser::IDENTIFIER) {
      setState(184);
      paramList();
    }
    setState(187);
    match(GuaParser::T__13);
   
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
//----------------- FunctionCallExprContext ------------------------------------------------------------------

tree::TerminalNode* GuaParser::FunctionCallExprContext::IDENTIFIER() {
  return getToken(GuaParser::IDENTIFIER, 0);
}

GuaParser::ArgListContext* GuaParser::FunctionCallExprContext::argList() {
  return getRuleContext<GuaParser::ArgListContext>(0);
}

GuaParser::FunctionCallExprContext::FunctionCallExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void GuaParser::FunctionCallExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallExpr(this);
}
void GuaParser::FunctionCallExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallExpr(this);
}

std::any GuaParser::FunctionCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitFunctionCallExpr(this);
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
//----------------- NewExprContext ------------------------------------------------------------------

tree::TerminalNode* GuaParser::NewExprContext::IDENTIFIER() {
  return getToken(GuaParser::IDENTIFIER, 0);
}

GuaParser::ArgListContext* GuaParser::NewExprContext::argList() {
  return getRuleContext<GuaParser::ArgListContext>(0);
}

GuaParser::NewExprContext::NewExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void GuaParser::NewExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewExpr(this);
}
void GuaParser::NewExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewExpr(this);
}

std::any GuaParser::NewExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitNewExpr(this);
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
//----------------- MemberFunctionCallExprContext ------------------------------------------------------------------

GuaParser::ExpressionContext* GuaParser::MemberFunctionCallExprContext::expression() {
  return getRuleContext<GuaParser::ExpressionContext>(0);
}

tree::TerminalNode* GuaParser::MemberFunctionCallExprContext::IDENTIFIER() {
  return getToken(GuaParser::IDENTIFIER, 0);
}

GuaParser::ArgListContext* GuaParser::MemberFunctionCallExprContext::argList() {
  return getRuleContext<GuaParser::ArgListContext>(0);
}

GuaParser::MemberFunctionCallExprContext::MemberFunctionCallExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void GuaParser::MemberFunctionCallExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberFunctionCallExpr(this);
}
void GuaParser::MemberFunctionCallExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberFunctionCallExpr(this);
}

std::any GuaParser::MemberFunctionCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitMemberFunctionCallExpr(this);
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
//----------------- MemberAccessExprContext ------------------------------------------------------------------

GuaParser::ExpressionContext* GuaParser::MemberAccessExprContext::expression() {
  return getRuleContext<GuaParser::ExpressionContext>(0);
}

tree::TerminalNode* GuaParser::MemberAccessExprContext::IDENTIFIER() {
  return getToken(GuaParser::IDENTIFIER, 0);
}

GuaParser::MemberAccessExprContext::MemberAccessExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void GuaParser::MemberAccessExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberAccessExpr(this);
}
void GuaParser::MemberAccessExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberAccessExpr(this);
}

std::any GuaParser::MemberAccessExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitMemberAccessExpr(this);
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
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, GuaParser::RuleExpression, precedence);

    size_t _la = 0;

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
    setState(211);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<FunctionCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(190);
      match(GuaParser::IDENTIFIER);
      setState(191);
      match(GuaParser::T__12);
      setState(193);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 515932954624) != 0)) {
        setState(192);
        argList();
      }
      setState(195);
      match(GuaParser::T__13);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NewExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(196);
      match(GuaParser::T__28);
      setState(197);
      match(GuaParser::IDENTIFIER);
      setState(198);
      match(GuaParser::T__12);
      setState(200);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 515932954624) != 0)) {
        setState(199);
        argList();
      }
      setState(202);
      match(GuaParser::T__13);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<IdExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(203);
      match(GuaParser::IDENTIFIER);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<IntExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(204);
      match(GuaParser::INT);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<FloatExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(205);
      match(GuaParser::FLOAT);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<StringExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(206);
      match(GuaParser::STRING);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(207);
      match(GuaParser::T__12);
      setState(208);
      expression(0);
      setState(209);
      match(GuaParser::T__13);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(259);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(257);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(213);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(214);
          match(GuaParser::T__21);
          setState(215);
          expression(21);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(216);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(217);
          match(GuaParser::MUL);
          setState(218);
          expression(20);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(219);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(220);
          match(GuaParser::DIV);
          setState(221);
          expression(19);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(222);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(223);
          match(GuaParser::ADD);
          setState(224);
          expression(18);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(225);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(226);
          match(GuaParser::SUB);
          setState(227);
          expression(17);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<EqualityExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(228);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(229);
          match(GuaParser::T__22);
          setState(230);
          expression(16);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<EqualityExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(231);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(232);
          match(GuaParser::T__23);
          setState(233);
          expression(15);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(234);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(235);
          match(GuaParser::T__24);
          setState(236);
          expression(14);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(237);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(238);
          match(GuaParser::T__25);
          setState(239);
          expression(13);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(240);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(241);
          match(GuaParser::T__26);
          setState(242);
          expression(12);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(243);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(244);
          match(GuaParser::T__27);
          setState(245);
          expression(11);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<MemberFunctionCallExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(246);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(247);
          match(GuaParser::T__29);
          setState(248);
          match(GuaParser::IDENTIFIER);
          setState(249);
          match(GuaParser::T__12);
          setState(251);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 515932954624) != 0)) {
            setState(250);
            argList();
          }
          setState(253);
          match(GuaParser::T__13);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<MemberAccessExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(254);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(255);
          match(GuaParser::T__29);
          setState(256);
          match(GuaParser::IDENTIFIER);
          break;
        }

        default:
          break;
        } 
      }
      setState(261);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArgListContext ------------------------------------------------------------------

GuaParser::ArgListContext::ArgListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GuaParser::ExpressionContext *> GuaParser::ArgListContext::expression() {
  return getRuleContexts<GuaParser::ExpressionContext>();
}

GuaParser::ExpressionContext* GuaParser::ArgListContext::expression(size_t i) {
  return getRuleContext<GuaParser::ExpressionContext>(i);
}


size_t GuaParser::ArgListContext::getRuleIndex() const {
  return GuaParser::RuleArgList;
}

void GuaParser::ArgListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgList(this);
}

void GuaParser::ArgListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgList(this);
}


std::any GuaParser::ArgListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuaVisitor*>(visitor))
    return parserVisitor->visitArgList(this);
  else
    return visitor->visitChildren(this);
}

GuaParser::ArgListContext* GuaParser::argList() {
  ArgListContext *_localctx = _tracker.createInstance<ArgListContext>(_ctx, getState());
  enterRule(_localctx, 40, GuaParser::RuleArgList);
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
    setState(262);
    expression(0);
    setState(267);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GuaParser::T__14) {
      setState(263);
      match(GuaParser::T__14);
      setState(264);
      expression(0);
      setState(269);
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

bool GuaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 19: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool GuaParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 20);
    case 1: return precpred(_ctx, 19);
    case 2: return precpred(_ctx, 18);
    case 3: return precpred(_ctx, 17);
    case 4: return precpred(_ctx, 16);
    case 5: return precpred(_ctx, 15);
    case 6: return precpred(_ctx, 14);
    case 7: return precpred(_ctx, 13);
    case 8: return precpred(_ctx, 12);
    case 9: return precpred(_ctx, 11);
    case 10: return precpred(_ctx, 10);
    case 11: return precpred(_ctx, 7);
    case 12: return precpred(_ctx, 6);

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
