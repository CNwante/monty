#include "monty.h"

/**
 * free_all_mem - Frees all allocated memory for arguments.
 */
void free_all_mem(void)
{
	close_strem();
	free_tokens_mem();
	free_args_mem();
}
