#include "monty.h"

/**
 * pall - prints n of all stack members
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pall function is called.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	(void) line_number;
	(void) stack;

	if (arg->stack_head == NULL)
		return;

	tmp = arg->stack_head;
	for (; tmp != NULL; tmp = tmp->next)
		printf("%d\n", tmp->n);
}
