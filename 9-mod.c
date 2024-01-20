#include "monty.h"

/**
 * mod - Computes the rest of the division of the second top element
 *       of the stack by the top element of the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the mod function is called.
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *elem1, *elem2;

	(void) stack;
	if (args->stack_length < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	elem1 = args->head;
	elem2 = elem1->next;

	if (elem1->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	elem2->n = elem2->n % elem1->n;
	pop_stack();
	args->stack_length -= 1;
}
