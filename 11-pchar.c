#include "monty.h"

/**
 * pchar - Prints the char at the top of the stack,
 *         followed by a new line.
 * @stack: A pointer to the stack.
 * @line_number: Line number where the mul function is called.
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *_char;

	(void) stack;
	if (args->head == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		free_all_mem();
		exit(EXIT_FAILURE);
	}

	_char = args->head;

	if (_char->n < 0 || _char->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		free_all_mem();
		exit(EXIT_FAILURE);
	}

	printf("%c\n", _char->n);
}
