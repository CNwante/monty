#include "monty.h"

/**
 * pop - Pop the very top element of the stack
 * @stack: The Stack pointer to the top
 * @line_number: Line where the bytecode file is
 *
 * Return: Always void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (args->head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free_all_mem();
		exit(EXIT_FAILURE);
	}
	pop_stack();
	args->stack_length -= 1;
}
