
// Generated from ./ance.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "anceListener.h"


/**
 * This class provides an empty implementation of anceListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  anceBaseListener : public anceListener {
public:

  virtual void enterFile(anceParser::FileContext * /*ctx*/) override { }
  virtual void exitFile(anceParser::FileContext * /*ctx*/) override { }

  virtual void enterType(anceParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(anceParser::TypeContext * /*ctx*/) override { }

  virtual void enterEntry(anceParser::EntryContext * /*ctx*/) override { }
  virtual void exitEntry(anceParser::EntryContext * /*ctx*/) override { }

  virtual void enterFunction(anceParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(anceParser::FunctionContext * /*ctx*/) override { }

  virtual void enterStatement(anceParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(anceParser::StatementContext * /*ctx*/) override { }

  virtual void enterFunction_call(anceParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(anceParser::Function_callContext * /*ctx*/) override { }

  virtual void enterPrint_statement(anceParser::Print_statementContext * /*ctx*/) override { }
  virtual void exitPrint_statement(anceParser::Print_statementContext * /*ctx*/) override { }

  virtual void enterReturn_statement(anceParser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(anceParser::Return_statementContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};
