#include "monty.h"

/**
 * push - Pushes an integer onto the stack.
 * @stack: A pointer to the stack.
 * @line_number: Line number where the push function is called.
 */

void push(stack_t **stack, unsigned int line_number)
{
	if (args->num_tokens <= 1 || !(is_num(args->tokens[1])))
	{
		free_args_mem();
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		malloc_failed();

	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(args->tokens[1]);

	if (args->head != NULL)
	{
		(*stack)->next = args->head;
		args->head->prev = *stack;
	}

	args->head = *stack;
	args->stack_length += 1;
}
