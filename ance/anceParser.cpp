
// Generated from ./ance.g4 by ANTLR 4.8


#include "anceListener.h"

#include "anceParser.h"


using namespace antlrcpp;
using namespace antlr4;

anceParser::anceParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

anceParser::~anceParser() {
  delete _interpreter;
}

std::string anceParser::getGrammarFileName() const {
  return "ance.g4";
}

const std::vector<std::string>& anceParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& anceParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- FileContext ------------------------------------------------------------------

anceParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<anceParser::StatementContext *> anceParser::FileContext::statement() {
  return getRuleContexts<anceParser::StatementContext>();
}

anceParser::StatementContext* anceParser::FileContext::statement(size_t i) {
  return getRuleContext<anceParser::StatementContext>(i);
}


size_t anceParser::FileContext::getRuleIndex() const {
  return anceParser::RuleFile;
}

void anceParser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<anceListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void anceParser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<anceListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}

anceParser::FileContext* anceParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, anceParser::RuleFile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(9); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(8);
      statement();
      setState(11); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == anceParser::PRINT

    || _la == anceParser::RETURN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

anceParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

anceParser::Print_statementContext* anceParser::StatementContext::print_statement() {
  return getRuleContext<anceParser::Print_statementContext>(0);
}

anceParser::Return_statementContext* anceParser::StatementContext::return_statement() {
  return getRuleContext<anceParser::Return_statementContext>(0);
}


size_t anceParser::StatementContext::getRuleIndex() const {
  return anceParser::RuleStatement;
}

void anceParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<anceListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void anceParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<anceListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

anceParser::StatementContext* anceParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, anceParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(15);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case anceParser::PRINT: {
        enterOuterAlt(_localctx, 1);
        setState(13);
        print_statement();
        break;
      }

      case anceParser::RETURN: {
        enterOuterAlt(_localctx, 2);
        setState(14);
        return_statement();
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

//----------------- Print_statementContext ------------------------------------------------------------------

anceParser::Print_statementContext::Print_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* anceParser::Print_statementContext::PRINT() {
  return getToken(anceParser::PRINT, 0);
}

tree::TerminalNode* anceParser::Print_statementContext::STRING() {
  return getToken(anceParser::STRING, 0);
}

tree::TerminalNode* anceParser::Print_statementContext::SEMICOLON() {
  return getToken(anceParser::SEMICOLON, 0);
}


size_t anceParser::Print_statementContext::getRuleIndex() const {
  return anceParser::RulePrint_statement;
}

void anceParser::Print_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<anceListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint_statement(this);
}

void anceParser::Print_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<anceListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint_statement(this);
}

anceParser::Print_statementContext* anceParser::print_statement() {
  Print_statementContext *_localctx = _tracker.createInstance<Print_statementContext>(_ctx, getState());
  enterRule(_localctx, 4, anceParser::RulePrint_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(17);
    match(anceParser::PRINT);
    setState(18);
    match(anceParser::STRING);
    setState(19);
    match(anceParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_statementContext ------------------------------------------------------------------

anceParser::Return_statementContext::Return_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* anceParser::Return_statementContext::RETURN() {
  return getToken(anceParser::RETURN, 0);
}

tree::TerminalNode* anceParser::Return_statementContext::SEMICOLON() {
  return getToken(anceParser::SEMICOLON, 0);
}

tree::TerminalNode* anceParser::Return_statementContext::INTEGER() {
  return getToken(anceParser::INTEGER, 0);
}


size_t anceParser::Return_statementContext::getRuleIndex() const {
  return anceParser::RuleReturn_statement;
}

void anceParser::Return_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<anceListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_statement(this);
}

void anceParser::Return_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<anceListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_statement(this);
}

anceParser::Return_statementContext* anceParser::return_statement() {
  Return_statementContext *_localctx = _tracker.createInstance<Return_statementContext>(_ctx, getState());
  enterRule(_localctx, 6, anceParser::RuleReturn_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(21);
    match(anceParser::RETURN);
    setState(23);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == anceParser::INTEGER) {
      setState(22);
      match(anceParser::INTEGER);
    }
    setState(25);
    match(anceParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> anceParser::_decisionToDFA;
atn::PredictionContextCache anceParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN anceParser::_atn;
std::vector<uint16_t> anceParser::_serializedATN;

std::vector<std::string> anceParser::_ruleNames = {
  "file", "statement", "print_statement", "return_statement"
};

std::vector<std::string> anceParser::_literalNames = {
  "", "", "", "'print'", "'return'", "';'"
};

std::vector<std::string> anceParser::_symbolicNames = {
  "", "STRING", "INTEGER", "PRINT", "RETURN", "SEMICOLON", "WHITESPACE"
};

dfa::Vocabulary anceParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> anceParser::_tokenNames;

anceParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x8, 0x1e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x6, 0x2, 0xc, 0xa, 0x2, 0xd, 0x2, 
    0xe, 0x2, 0xd, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x12, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x1a, 0xa, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x2, 0x2, 0x6, 0x2, 0x4, 0x6, 0x8, 
    0x2, 0x2, 0x2, 0x1c, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x13, 0x3, 0x2, 0x2, 0x2, 0x8, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0xc, 0x5, 0x4, 0x3, 0x2, 0xb, 0xa, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0xd, 0xb, 0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x3, 0x3, 0x2, 0x2, 0x2, 0xf, 0x12, 0x5, 0x6, 0x4, 0x2, 
    0x10, 0x12, 0x5, 0x8, 0x5, 0x2, 0x11, 0xf, 0x3, 0x2, 0x2, 0x2, 0x11, 
    0x10, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 
    0x7, 0x5, 0x2, 0x2, 0x14, 0x15, 0x7, 0x3, 0x2, 0x2, 0x15, 0x16, 0x7, 
    0x7, 0x2, 0x2, 0x16, 0x7, 0x3, 0x2, 0x2, 0x2, 0x17, 0x19, 0x7, 0x6, 
    0x2, 0x2, 0x18, 0x1a, 0x7, 0x4, 0x2, 0x2, 0x19, 0x18, 0x3, 0x2, 0x2, 
    0x2, 0x19, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x1b, 0x1c, 0x7, 0x7, 0x2, 0x2, 0x1c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5, 
    0xd, 0x11, 0x19, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

anceParser::Initializer anceParser::_init;
