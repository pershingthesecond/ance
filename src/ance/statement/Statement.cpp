#include "Statement.h"

Statement::Statement(unsigned int l, unsigned int c)
    : line_(l), column_(c)
{
}

void Statement::setContainingFunction(ance::DefinedFunction* function)
{
    assert(!function_);
    function_ = function;
}

ance::DefinedFunction* Statement::getContainingFunction() const
{
    return function_;
}

unsigned int Statement::getLine() const
{
    return line_;
}

unsigned int Statement::getColumn() const
{
    return column_;
}
