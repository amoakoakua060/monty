#include "monty.h"

/**
 * sub - subtract value of first two memebers
 * @stack: Pointer to the stack.
 * @line_number: Line number where the sub function is called.
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;

	(void) stack;
	if (arg->stack_length < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n",
			line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp1 = arg->stack_head;
	temp2 = arg->stack_head->next;

	temp2->n = temp2->n - temp1->n;
	delete_stack_node();
}
