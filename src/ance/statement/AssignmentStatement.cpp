#include "AssignmentStatement.h"

#include <utility>
#include <iostream>

#include "Expression.h"
#include "Function.h"
#include "LocalScope.h"
#include "Value.h"

AssignmentStatement::AssignmentStatement(
	std::string variable_identifier,
	Expression* assigned,
	unsigned int l,
	unsigned int c
)
	:
	Statement(l, c), variable_identifier_(std::move(variable_identifier)), assigned_(assigned)
{
}

void AssignmentStatement::setContainingFunction(ance::Function* function)
{
	Statement::setContainingFunction(function);

	assigned_->setScope(function->getScope());
}

void AssignmentStatement::build(
	llvm::LLVMContext& c,
	llvm::Module* m,
	CompileState* state,
	llvm::IRBuilder<>& ir,
	llvm::DIBuilder* di
)
{
	ance::Variable* variable = getContainingFunction()->getScope()->getVariable(variable_identifier_);
	assert(variable->type() == assigned_->getType() && "Assignment types have to match.");

	variable->setValue(assigned_->getValue()->getValue(c, m, state, ir, di), c, m, state, ir, di);
}

AssignmentStatement::~AssignmentStatement() = default;