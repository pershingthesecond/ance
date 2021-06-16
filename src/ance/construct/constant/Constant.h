#ifndef ANCE_SRC_ANCE_CONSTRUCT_CONSTANT_CONSTANT_H_
#define ANCE_SRC_ANCE_CONSTRUCT_CONSTANT_CONSTANT_H_

#include "ConstantExpression.h"
#include "ExpressionBackedValue.h"

#include "llvm/IR/DIBuilder.h"
#include "llvm/IR/IRBuilder.h"

namespace ance
{
class Constant : public Value
{
	public:
		void build(llvm::Module* m);

	protected:
		virtual llvm::Constant* buildContent(llvm::Module* m) = 0;

	public:
		llvm::Constant* getContentConstant();

		void build(
			llvm::LLVMContext& c,
			llvm::Module* m,
			CompileState* state,
			llvm::IRBuilder<>& ir,
			llvm::DIBuilder* di
		) final;

		llvm::Value* getNativeValue() final;

		llvm::Value* getContentValue(
			llvm::LLVMContext& c,
			llvm::Module* m,
			CompileState* state,
			llvm::IRBuilder<>& ir,
			llvm::DIBuilder* di
		) final;

	protected:
		llvm::Value* native_value_{nullptr};
		llvm::Constant* content_constant_{nullptr};
};
}
#endif