#include "monty.h"

/**
 * get_instruction - get opcode and function to be run
 */
void get_instruction(void)
{
	int i = 0;
	instruction_t instructions[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"nop", &nop}, {"add", &add},
		{"pall", &pall}, {"sub", &sub},
		{"div", &_div}, {"mul", &mul},
		{"mod", &mod}, {NULL, NULL}
	};

	if (arg->n_tokens == 0)
		return;

	arg->is_comment = 0;
	if (is_comment())
	{
		arg->is_comment = 1;
		return;
	}

	for (; instructions[i].opcode != NULL; i++)
		if (strcmp(instructions[i].opcode, arg->tokens[0]) == 0)
		{
			arg->instruction->opcode = instructions[i].opcode;
			arg->instruction->f = instructions[i].f;
			return;
		}

	invalid_instruction();
}
