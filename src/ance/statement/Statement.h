#ifndef ANCE_SRC_ANCE_STATEMENT_STATEMENT_H_
#define ANCE_SRC_ANCE_STATEMENT_STATEMENT_H_

#include "llvm/IR/DIBuilder.h"
#include "llvm/IR/IRBuilder.h"

#include "CompileContext.h"

class CompileContext;

namespace ance
{
    class DefinedFunction;
}

class Statement
{
  public:
    Statement(unsigned int l, unsigned int c);

    virtual void setContainingFunction(ance::DefinedFunction* function);

    [[nodiscard]] ance::DefinedFunction* getContainingFunction() const;

    [[nodiscard]] unsigned int getLine() const;

    [[nodiscard]] unsigned int getColumn() const;

    virtual void build(CompileContext* context) = 0;

    virtual ~Statement() = default;

  private:
    ance::DefinedFunction* function_ {nullptr};
    unsigned int           line_;
    unsigned int           column_;
};

#endif