#include "monty.h"

/**
* pop_stack - Delete node at the head/top.
*
* Return: void
*/
void pop_stack(void)
{
	stack_t *temp;

	temp = args->head;
	args->head = temp->next;
	free(temp);
}
