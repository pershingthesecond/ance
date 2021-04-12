#include "assignment_statement.h"

#include <utility>

#include "Expression.h"
#include "Function.h"
#include "LocalScope.h"
#include "Value.h"

assignment_statement::assignment_statement(ance::Function* function, unsigned int l, unsigned int c, std::string variable_identifier, Expression* assigned) :
	Statement(function, l, c), variable_identifier_(std::move(variable_identifier)), assigned_(assigned)
{
}

void assignment_statement::build(llvm::LLVMContext& c, llvm::Module* m, CompileState* state, llvm::IRBuilder<>& ir, llvm::DIBuilder* di)
{
	get_containing_function()->get_scope()->get_variable(variable_identifier_)->set_value(assigned_->get_value()->get_value(c, m, state, ir, di), c, m, state, ir, di);
}

assignment_statement::~assignment_statement() = default;