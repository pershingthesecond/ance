#include "IntegerType.h"

#include <llvm/IR/Constants.h>
#include <llvm/IR/Type.h>

#include "GlobalScope.h"
#include "Scope.h"

ance::IntegerType::IntegerType(uint64_t bit_size, bool is_signed)
    : bit_size_(bit_size), is_signed_(is_signed)
{
}

std::string ance::IntegerType::getName()
{
    if (is_signed_) return "i" + std::to_string(bit_size_);
    else
        return "ui" + std::to_string(bit_size_);
}

llvm::Constant* ance::IntegerType::getDefaultContent(llvm::LLVMContext& c)
{
    return llvm::ConstantInt::get(getNativeType(c), 0, is_signed_);
}

llvm::Type* ance::IntegerType::getContentType(llvm::LLVMContext& c)
{
    if (!type_)
    {
        type_ = llvm::Type::getIntNTy(c, bit_size_);
    }

    return type_;
}

ance::Type* ance::IntegerType::get(Application& app, uint64_t bit_size, bool is_signed)
{
    auto*       type      = new ance::IntegerType(bit_size, is_signed);
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