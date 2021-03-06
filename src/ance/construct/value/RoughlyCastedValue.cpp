#include "RoughlyCastedValue.h"

#include "CompileContext.h"
#include "Type.h"

ance::RoughlyCastedValue::RoughlyCastedValue(ance::Type* target_type, ance::Value* original)
    : target_type_(target_type), original_(original)
{
    assert(target_type->storage() == original->type()->storage());
}

ance::Type* ance::RoughlyCastedValue::type()
{
    return target_type_;
}

void ance::RoughlyCastedValue::buildNativeValue(CompileContext* context)
{
    assert(target_type_->getNativeType(*context->llvmContext()) == original_->type()->getNativeType(*context->llvmContext())
           && "Native type has to be equal.");
    original_->buildNativeValue(context);
}

llvm::Value* ance::RoughlyCastedValue::getNativeValue()
{
    return original_->getNativeValue();
}
