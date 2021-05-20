#ifndef ANCE_SRC_ANCE_CONSTRUCT_ROUGHLYCASTEDVALUE_H_
#define ANCE_SRC_ANCE_CONSTRUCT_ROUGHLYCASTEDVALUE_H_

#include "Value.h"

namespace ance
{
class RoughlyCastedValue : public Value
{
	public:
		RoughlyCastedValue(ance::Type* target_type, ance::Value* original);

		ance::Type* getType() override;

		llvm::Value* getValue(
			llvm::LLVMContext& c,
			llvm::Module* m,
			CompileState* state,
			llvm::IRBuilder<>& ir,
			llvm::DIBuilder* di
		) override;

	private:
		ance::Type* target_type_;
		ance::Value* original_;
};
}

#endif