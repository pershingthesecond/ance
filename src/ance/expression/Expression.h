#ifndef ANCE_SRC_ANCE_EXPRESSION_EXPRESSION_H_
#define ANCE_SRC_ANCE_EXPRESSION_EXPRESSION_H_

#include "llvm/IR/DIBuilder.h"
#include "llvm/IR/IRBuilder.h"

class CompileContext;

namespace ance
{
    class Value;

    class Type;

    class Scope;
}

class Expression
{
  public:
    virtual void setScope(ance::Scope* scope);

    virtual ance::Type* type() = 0;

    virtual ance::Value* getValue() = 0;

    virtual ~Expression() = default;
};

#endif