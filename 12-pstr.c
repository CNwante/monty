#include "monty.h"

/**
 * pstr - Prints the string starting at the top of the stack,
 *        followed by a new line.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the mul function is called.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *str;

	(void) stack;
	(void) line_number;

	str = args->head;

	while (str != NULL)
	{
		if (str->n <= 0 || str->n > 127)
			break;
		printf("%c", str->n);
		str = str->next;
	}

	printf("\n");
}
