#include "monty.h"

/**
 * validate_arguments - ensures valid number of arguments
 * @argc: number of command-line arguments
 */
void validate_arguments(int argc)
{
	if (argc == 2)
		return;

	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
