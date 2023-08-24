#include "monty.h"

argument_t *arg = NULL;

/**
 * main - interpreting monty code from .m files
 * @argc: The number of command-line args.
 * @argv: array of command-line args.
 *
 * Return: returns int 0 (Success)
 */
int main(int argc, char **argv)
{
	size_t n = 0;

	validate_arguments(argc);

	arg = malloc(sizeof(argument_t));
	if (arg == NULL)
		malloc_failed();

	init_arg();
	open_stream(argv[1]);

	while (getline(&arg->line, &n, arg->stream) != -1)
	{
		arg->line_number += 1;
		tokenize();
		get_instruction();
		run_instruction();
		free_tokens();
	}

	close_stream();
	free_arg();

	return (0);
}
