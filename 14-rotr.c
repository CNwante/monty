#include "monty.h"

/**
 * rotr - Rotates the stack to the bottom.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the mul function is called.
 *
 * Description: The last element of the stack
 *              becomes the top element of the stack.
 */

void rotr(stack_t **stack, unsigned int line_number)
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
