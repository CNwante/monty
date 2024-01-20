#include "monty.h"

/**
 * rotr - Rotates the stack to the bottom
 * @stack: A pointer to the stack.
 * @line_number: Line number where the rotl function is called.
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *last;

	(void) stack;
	(void) line_number;
	if (args->stack_length < 2)
		return;

	top = args->head;
	while (top)
	{
		if (top->next == NULL)
		{
			last = top;
			break;
		}
		top = top->next;
	}

	last->prev->next = NULL;
	last->next = args->head;
	last->prev = NULL;

	args->head = last;
}
