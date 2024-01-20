#include "monty.h"

/**
 * mul - Multiplies the second top element of the stack
 *       with the top element of the stack.
 * @stack: A pointer to the stack.
 * @line_number: Line number where the mul function is called.
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *elem1, *elem2;

	(void) stack;
	if (args->stack_length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n",
				line_number);
		free_all_mem();
		exit(EXIT_FAILURE);
	}

	elem1 = args->head;
	elem2 = elem1->next;

	elem2->n = elem2->n * elem1->n;
	pop_stack();
	args->stack_length -= 1;
}
