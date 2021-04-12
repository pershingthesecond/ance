#ifndef ANCE_EXPRESSIONVALUE_H
#define ANCE_EXPRESSIONVALUE_H

#include "Value.h"
#include "BuildableExpression.h"

namespace ance
{
	class ExpressionBackedValue : public Value
	{
	public:
		ExpressionBackedValue(BuildableExpression* expression);
		ance::Type* get_type() override;
		llvm::Value* get_value(llvm::LLVMContext& c, llvm::Module* m, CompileState* state, llvm::IRBuilder<>& ir, llvm::DIBuilder* di) override;

	private:
        BuildableExpression* expression_;
	};
}
#endif