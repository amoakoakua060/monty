#include "monty.h"

/**
 * free_tokens - free arg tokens memory
 */
void free_tokens(void)
{
	int i = 0;

	if (!arg->tokens)
		return;

	while (arg->tokens[i])
	{
		free(arg->tokens[i]);
		i++;
	}
	free(arg->tokens);
}
