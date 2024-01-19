#include "monty.h"

/**
* free_stack - Free the nodes in a stack list.
* @head: A pointer to first node of the dlistint link.
*
* Return: void
*/
void free_stack(stack_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_stack(head->next);
	free(head);
}
