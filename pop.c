#include "monty.h"

/**
 * pop - Pop the very top element of the stack
 * @stack: The Stack pointer to the top
 * @line_number: Line where the bytecode file is
 * Return: Always Void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		all_freer();
		exit(EXIT_FAILURE);
	}
	return stack->stack[stack->top--];
}
