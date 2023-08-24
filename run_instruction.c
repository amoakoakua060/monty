#include "monty.h"

/**
 * run_instruction - runs function related to opcode
 */
void run_instruction(void)
{
	stack_t *stack = NULL;

	if (arg->n_tokens == 0 || arg->is_comment)
		return;

	arg->instruction->f(&stack, arg->line_number);
}
