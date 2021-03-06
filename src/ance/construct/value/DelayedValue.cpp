#include "DelayedValue.h"

#include "DelayableExpression.h"

ance::DelayedValue::DelayedValue(DelayableExpression* expression)
    : expression_(expression)
{
}

ance::Type* ance::DelayedValue::type()
{
    return expression_->type();
}

void ance::DelayedValue::setValue(ance::Value* value)
{
    assert(!value_);
    assert(value->type() == type() && "Type has to match.");
    value_ = value;
}

void ance::DelayedValue::buildNativeValue(CompileContext* context)
{
    expression_->buildValue(context);
    value_->buildNativeValue(context);
}

llvm::Value* ance::DelayedValue::getNativeValue()
{
    return value_->getNativeValue();
}
