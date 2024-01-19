#include "monty.h"

/**
 * pall - Prints all the elements in the stack.
 * @stack: A pointer to the stack.
 * @line_number: Line number where the pall function is invoked.
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *item;

	if (args->head == NULL)
		return;
	(void) line_number;
	(void) stack;

	item = args->head;
	while (item != NULL)
	{
		printf("%d\n", item->n);
		item = item->next;
	}
}
