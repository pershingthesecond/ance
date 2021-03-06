#ifndef ANCE_SRC_ANCE_STATEMENT_ASSIGNMENTSTATEMENT_H_
#define ANCE_SRC_ANCE_STATEMENT_ASSIGNMENTSTATEMENT_H_

#include "Statement.h"

class Assignable;

class Expression;

class AssignmentStatement : public Statement
{
  public:
    AssignmentStatement(
        Assignable*  assignable,
        Expression*  assigned,
        unsigned int line,
        unsigned int column);

    void setFunction(ance::DefinedFunction* function) override;

    void build(CompileContext* context) override;

  private:
    Assignable* assignable_;
    Expression* assigned_;
};
#endif