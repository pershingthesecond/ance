 
#include "Statement.h"
class return_statement :
	public Statement
{
public:
	return_statement(unsigned int l, unsigned int c, uint32_t code);
	void build(llvm::LLVMContext& c, llvm::Module* m, CompileState* state, llvm::IRBuilder<>& ir, llvm::DIBuilder* di);
	~return_statement();

private:
	uint32_t exit_code;
};