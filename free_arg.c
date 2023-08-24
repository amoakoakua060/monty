#include "monty.h"

/**
 * free_arg - Frees the memory allocated for the argu
 */

void free_arg(void)
{
	if (arg == NULL)
		return;

	if (arg->instruction)
	{
		free(arg->instruction);
		arg->instruction = NULL;
	}

	free_stack_head();

	if (arg->line)
	{
		free(arg->line);
		arg->line = NULL;
	}

	free(arg);
}
