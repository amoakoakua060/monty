#include "monty.h"

/**
 * mod - computes the rest of the division of the second top
 * element of the stack by the top element of the stack
 * @stack: Pointer to the stack.
 * @line_number: Line number where the mul function is called.
 */

void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;

	(void) stack;
	if (arg->stack_length < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n",
			line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp1 = arg->stack_head;
	temp2 = arg->stack_head->next;

	if (temp1->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp2->n = temp2->n % temp1->n;
	delete_stack_node();
}
