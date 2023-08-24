#include "monty.h"

/**
 * push - pushes opcode arg onto stack
 * @stack: Pointer to the stack head.
 * @line_number: Line number where the push function is called.
 */
void push(stack_t **stack, unsigned int line_number)
{
	if (arg->n_tokens <= 1 || is_not_number(arg->tokens[1]))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_arg();
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		malloc_failed();

	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(arg->tokens[1]);

	if (arg->stack_head == NULL)
	{
		arg->stack_head = *stack;
	}
	else
	{
		(*stack)->next = arg->stack_head;
		arg->stack_head->prev = *stack;
		arg->stack_head = *stack;
	}
	arg->stack_length += 1;
}
