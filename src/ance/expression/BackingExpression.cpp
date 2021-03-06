#include "BackingExpression.h"

void BackingExpression::buildBackingValue(CompileContext* context)
{
    assert(!native_value_ && "Expressions must be built only once.");
    native_value_ = buildNativeValue(context);
}

void BackingExpression::build(CompileContext* context)
{
    buildBackingValue(context);
}

llvm::Value* BackingExpression::getNativeValue()
{
    assert(native_value_ && "Expressions must be built before accessing value.");
    return native_value_;
}
