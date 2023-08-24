#include "monty.h"

/**
 * init_arg - initializes arg global variable
 */
void init_arg(void)
{
	arg->instruction = malloc(sizeof(instruction_t));
	if (arg->instruction == NULL)
		malloc_failed();

	arg->stack_head = NULL;
	arg->line = NULL;

	arg->n_tokens = 0;
	arg->is_comment = 0;
	arg->line_number = 0;
	arg->stack_length = 0;
	arg->stream = NULL;
}
