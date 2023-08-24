#include "monty.h"

/**
* delete_stack_node - remove first stack member
*/
void delete_stack_node(void)
{
	stack_t *temp;

	temp = arg->stack_head;
	arg->stack_head = temp->next;
	free(temp);
	arg->stack_length -= 1;
}
