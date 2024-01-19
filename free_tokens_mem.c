#include "monty.h"

/**
 * free_tokens_mem - Frees the allocated memory for tokens.
 */
void free_tokens_mem(void)
{
	int i = 0;

	if (args->tokens == NULL)
		return;

	while (args->tokens[i])
	{
		free(args->tokens[i]);
		i++;
	}

	free(args->tokens);
	args->tokens = NULL;
}
