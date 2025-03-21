
// Generated from Gua.g4 by ANTLR 4.13.2


#include "GuaLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct GuaLexerStaticData final {
  GuaLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GuaLexerStaticData(const GuaLexerStaticData&) = delete;
  GuaLexerStaticData(GuaLexerStaticData&&) = delete;
  GuaLexerStaticData& operator=(const GuaLexerStaticData&) = delete;
  GuaLexerStaticData& operator=(GuaLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag gualexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<GuaLexerStaticData> gualexerLexerStaticData = nullptr;

void gualexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (gualexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(gualexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GuaLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "ID", "INT", "DOUBLE", "STRING", "WS", "COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,17,123,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,
  	1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,11,1,11,5,11,74,8,11,10,11,12,11,77,
  	9,11,1,12,4,12,80,8,12,11,12,12,12,81,1,13,4,13,85,8,13,11,13,12,13,86,
  	1,13,1,13,4,13,91,8,13,11,13,12,13,92,1,14,1,14,1,14,1,14,5,14,99,8,14,
  	10,14,12,14,102,9,14,1,14,1,14,1,15,4,15,107,8,15,11,15,12,15,108,1,15,
  	1,15,1,16,1,16,1,16,1,16,5,16,117,8,16,10,16,12,16,120,9,16,1,16,1,16,
  	0,0,17,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,
  	27,14,29,15,31,16,33,17,1,0,6,3,0,65,90,95,95,97,122,4,0,48,57,65,90,
  	95,95,97,122,1,0,48,57,3,0,10,10,13,13,34,34,3,0,9,10,13,13,32,32,2,0,
  	10,10,13,13,130,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,
  	0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,
  	0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,
  	31,1,0,0,0,0,33,1,0,0,0,1,35,1,0,0,0,3,44,1,0,0,0,5,46,1,0,0,0,7,48,1,
  	0,0,0,9,50,1,0,0,0,11,52,1,0,0,0,13,54,1,0,0,0,15,58,1,0,0,0,17,60,1,
  	0,0,0,19,62,1,0,0,0,21,69,1,0,0,0,23,71,1,0,0,0,25,79,1,0,0,0,27,84,1,
  	0,0,0,29,94,1,0,0,0,31,106,1,0,0,0,33,112,1,0,0,0,35,36,5,102,0,0,36,
  	37,5,117,0,0,37,38,5,110,0,0,38,39,5,99,0,0,39,40,5,116,0,0,40,41,5,105,
  	0,0,41,42,5,111,0,0,42,43,5,110,0,0,43,2,1,0,0,0,44,45,5,40,0,0,45,4,
  	1,0,0,0,46,47,5,41,0,0,47,6,1,0,0,0,48,49,5,44,0,0,49,8,1,0,0,0,50,51,
  	5,123,0,0,51,10,1,0,0,0,52,53,5,125,0,0,53,12,1,0,0,0,54,55,5,118,0,0,
  	55,56,5,97,0,0,56,57,5,114,0,0,57,14,1,0,0,0,58,59,5,61,0,0,59,16,1,0,
  	0,0,60,61,5,59,0,0,61,18,1,0,0,0,62,63,5,114,0,0,63,64,5,101,0,0,64,65,
  	5,116,0,0,65,66,5,117,0,0,66,67,5,114,0,0,67,68,5,110,0,0,68,20,1,0,0,
  	0,69,70,5,43,0,0,70,22,1,0,0,0,71,75,7,0,0,0,72,74,7,1,0,0,73,72,1,0,
  	0,0,74,77,1,0,0,0,75,73,1,0,0,0,75,76,1,0,0,0,76,24,1,0,0,0,77,75,1,0,
  	0,0,78,80,7,2,0,0,79,78,1,0,0,0,80,81,1,0,0,0,81,79,1,0,0,0,81,82,1,0,
  	0,0,82,26,1,0,0,0,83,85,7,2,0,0,84,83,1,0,0,0,85,86,1,0,0,0,86,84,1,0,
  	0,0,86,87,1,0,0,0,87,88,1,0,0,0,88,90,5,46,0,0,89,91,7,2,0,0,90,89,1,
  	0,0,0,91,92,1,0,0,0,92,90,1,0,0,0,92,93,1,0,0,0,93,28,1,0,0,0,94,100,
  	5,34,0,0,95,99,8,3,0,0,96,97,5,92,0,0,97,99,9,0,0,0,98,95,1,0,0,0,98,
  	96,1,0,0,0,99,102,1,0,0,0,100,98,1,0,0,0,100,101,1,0,0,0,101,103,1,0,
  	0,0,102,100,1,0,0,0,103,104,5,34,0,0,104,30,1,0,0,0,105,107,7,4,0,0,106,
  	105,1,0,0,0,107,108,1,0,0,0,108,106,1,0,0,0,108,109,1,0,0,0,109,110,1,
  	0,0,0,110,111,6,15,0,0,111,32,1,0,0,0,112,113,5,47,0,0,113,114,5,47,0,
  	0,114,118,1,0,0,0,115,117,8,5,0,0,116,115,1,0,0,0,117,120,1,0,0,0,118,
  	116,1,0,0,0,118,119,1,0,0,0,119,121,1,0,0,0,120,118,1,0,0,0,121,122,6,
  	16,0,0,122,34,1,0,0,0,9,0,75,81,86,92,98,100,108,118,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  gualexerLexerStaticData = std::move(staticData);
}

}

GuaLexer::GuaLexer(CharStream *input) : Lexer(input) {
  GuaLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *gualexerLexerStaticData->atn, gualexerLexerStaticData->decisionToDFA, gualexerLexerStaticData->sharedContextCache);
}

GuaLexer::~GuaLexer() {
  delete _interpreter;
}

std::string GuaLexer::getGrammarFileName() const {
  return "Gua.g4";
}

const std::vector<std::string>& GuaLexer::getRuleNames() const {
  return gualexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& GuaLexer::getChannelNames() const {
  return gualexerLexerStaticData->channelNames;
}

const std::vector<std::string>& GuaLexer::getModeNames() const {
  return gualexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& GuaLexer::getVocabulary() const {
  return gualexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView GuaLexer::getSerializedATN() const {
  return gualexerLexerStaticData->serializedATN;
}

const atn::ATN& GuaLexer::getATN() const {
  return *gualexerLexerStaticData->atn;
}




void GuaLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  gualexerLexerInitialize();
#else
  ::antlr4::internal::call_once(gualexerLexerOnceFlag, gualexerLexerInitialize);
#endif
}
