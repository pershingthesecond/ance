#pragma once

#include "Statement.h"

class BuildableExpression;

class ExpressionStatement : public Statement
{
	public:
		ExpressionStatement(BuildableExpression* expression, unsigned int l, unsigned int c);

		void setContainingFunction(ance::Function *function) override;

		void build(
			llvm::LLVMContext& c,
			llvm::Module* m,
			CompileState* state,
			llvm::IRBuilder<>& ir,
			llvm::DIBuilder* di
		) override;

		~ExpressionStatement() override;

	private:
		BuildableExpression* expression_;
};
