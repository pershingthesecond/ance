#include "ArrayType.h"
#include "Scope.h"

#include <llvm/IR/Constants.h>
#include <llvm/IR/DerivedTypes.h>

#include "GlobalScope.h"

ance::ArrayType::ArrayType(Type* element_type, const uint64_t size)
	:
	size_(size),
	element_type_(element_type)
{
}

std::string ance::ArrayType::getName()
{
	return element_type_->getName() + "[" + std::to_string(size_) + "]";
}

llvm::Constant* ance::ArrayType::getDefault(llvm::LLVMContext& c)
{
	llvm::Constant* consts[size_];
	std::fill_n(consts, size_, element_type_->getDefault(c));

	if (!type_) getNativeType(c);

	llvm::ArrayRef<llvm::Constant*> content = llvm::ArrayRef<llvm::Constant*>(&consts[0], size_);

	return llvm::ConstantArray::get(type_, content);
}

llvm::Type* ance::ArrayType::getContentType(llvm::LLVMContext& c)
{
	if (!type_)
	{
		type_ = llvm::ArrayType::get(element_type_->getNativeType(c), size_);
	}

	return type_;
}

ance::Type* ance::ArrayType::get(Application& app, Type* element_type, uint64_t size)
{
	auto* type = new ance::ArrayType(element_type, size);
	std::string type_name = type->getName();

	if (app.globalScope()->isTypeRegistered(type_name))
	{
		delete type;
		return app.globalScope()->getType(type_name);
	}
	else
	{
		app.globalScope()->registerType(type);
		return type;
	}
}

InternalStorage ance::ArrayType::storage()
{
	return InternalStorage::AS_POINTER;
}
