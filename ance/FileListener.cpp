#include "FileListener.h"
#include "return_statement.h"

FileListener::FileListener(Application& app)
	: application(app)
{
}

void FileListener::exitReturn_statement(anceParser::Return_statementContext* ctx)
{
	unsigned int line = ctx->getStart()->getLine();
	unsigned int column = ctx->getStart()->getCharPositionInLine();

	uint32_t exit_code = 0;

	if (ctx->INTEGER() != nullptr)
	{
		exit_code = std::stoul(ctx->INTEGER()->getText());
	}

	return_statement* statement = new return_statement(line, column, exit_code);
	application.PushStatement(statement);
}