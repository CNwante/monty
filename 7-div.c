#include "monty.h"

/**
 * _div - Divides the second top element of the stack by the top element.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the _div function is called.
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *elem1, *elem2;

	(void) stack;
	if (args->stack_length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
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

	elem2->n = elem2->n / elem1->n;
	pop_stack();
	args->stack_length -= 1;
}
