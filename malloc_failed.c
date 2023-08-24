#include "monty.h"

/**
 * malloc_failed - Handler for malloc failures
 */
void malloc_failed(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	free_arg();
	exit(EXIT_FAILURE);
}
