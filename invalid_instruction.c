#include "monty.h"

/**
 * invalid_instruction - Handler for unknown opcodes
 */
void invalid_instruction(void)
{
	fprintf(stderr, "L%d: unknown instruction %s\n",
			arg->line_number, arg->tokens[0]);
	free_all_args();
	exit(EXIT_FAILURE);
}
