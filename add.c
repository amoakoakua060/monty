#include "monty.h"

/**
 * add - adds the first two members to go out
 * @stack: Pointer to the stack.
 * @line_number: Line number where the add function is called.
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;

	(void) stack;
	if (arg->stack_length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n",
				line_number);
		close_stream();
		free_tokens();
		free_arg();
		exit(EXIT_FAILURE);
	}

	temp1 = arg->stack_head;
	temp2 = arg->stack_head->next;

	temp2->n = temp1->n + temp2->n;
	delete_stack_node();
}
