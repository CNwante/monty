#include "monty.h"

/**
 * invalid_opcode - Handles an unknown instruction error.
 */
void invalid_opcode(void)
{
	fprintf(stderr, "L%d: unknown instruction %s\n",
			args->line_number, args->tokens[0]);
	close_strem();
	free_tokens_mem();
	free_args_mem();
	exit(EXIT_FAILURE);
}

/**
 * get_opcode - Sets the opcode based on the first token in the input line.
 */

void get_opcode(void)
{
	int i = 0;
	instruction_t actions[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"pall", &pall}, {"add", &add},
		{"nop", &nop}, {"sub", &sub},
		{NULL, NULL}
	};

	if (args->num_tokens == 0)
		return;

	while (actions[i].opcode != NULL)
	{
		if (strcmp(actions[i].opcode, args->tokens[0]) == 0)
		{
			args->instruction->opcode = actions[i].opcode;
			args->instruction->f = actions[i].f;
			return;
		}
		i++;
	}
	invalid_opcode();
}
