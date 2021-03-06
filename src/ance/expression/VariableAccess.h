#ifndef ANCE_SRC_ANCE_EXPRESSION_VARIABLEACCESS_H_
#define ANCE_SRC_ANCE_EXPRESSION_VARIABLEACCESS_H_

#include "DelayableExpression.h"

namespace ance
{
    class Variable;

    class Scope;
}

class VariableAccess : public DelayableExpression
{
  public:
    explicit VariableAccess(std::string identifier);

    void setScope(ance::Scope* scope) override;

    ance::Type* type() override;

    void buildValue(CompileContext* context) override;

    ~VariableAccess() override;

  private:
    std::string     identifier_;
    ance::Variable* variable_ {nullptr};
};

#endif