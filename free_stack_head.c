#include "monty.h"

/**
* free_stack - free the stack using the head
* @head: first node of stack
*/
void free_stack(stack_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		free_stack(head->next);
	}

	free(head);
}


/**
 * free_stack_head - Frees the memory allocated for the stack_head
 */
void free_stack_head(void)
{
	if (arg->stack_head)
		free_stack(arg->stack_head);

	arg->stack_head = NULL;
}
