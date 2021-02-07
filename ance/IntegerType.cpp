#include "IntegerType.h"

#include <llvm/IR/Constants.h>
#include <llvm/IR/Type.h>

#include "Scope.h"

ance::IntegerType::IntegerType(uint64_t bit_size, bool is_signed) : bit_size_(bit_size), is_signed_(is_signed), type_(nullptr)
{
}

std::string ance::IntegerType::get_name()
{
	if (is_signed_) return "i" + std::to_string(bit_size_);
	else return "ui" + std::to_string(bit_size_);
}

llvm::Constant* ance::IntegerType::get_default(llvm::LLVMContext& c)
{
	return llvm::ConstantInt::get(get_native_type(c), 0, is_signed_);
}

llvm::Type* ance::IntegerType::get_native_type(llvm::LLVMContext& c)
{
	if (!type_)
	{
		type_ = llvm::Type::getIntNTy(c, bit_size_);
	}

	return type_;
}

ance::Type* ance::IntegerType::get(ance::Scope* scope, uint64_t bit_size, bool is_signed)
{
	ance::IntegerType* type = new ance::IntegerType(bit_size, is_signed);
	std::string type_name = type->get_name();

	if (scope->is_type_registered(type_name))
	{
		delete type;
		return scope->get_type(type_name);
	}
	else
	{
		scope->register_type(type);
		return type;
	}
}