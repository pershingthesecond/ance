#include "ExpressionBackedConstant.h"

ance::ExpressionBackedConstant::ExpressionBackedConstant(BackingConstantExpression* expression)
    : expression_(
        expression)
{
}

ance::Type* ance::ExpressionBackedConstant::type()
{
    return expression_->type();
}

llvm::Constant* ance::ExpressionBackedConstant::buildContent(llvm::Module* m)
{
    expression_->buildConstant(m->getContext());
    return expression_->getContentConstant();
}