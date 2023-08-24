#include "monty.h"

/**
 * free_all_args - close stream and free all arguments
 */
void free_all_args(void)
{
	close_stream();
	free_tokens();
	free_arg();
}
