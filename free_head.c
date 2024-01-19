#include "monty.h"

/**
 * free_head - Frees the memory allocated for the head and
 *             sets it to NULL.
 */
void free_head(void)
{
	if (args->head)
		free_stack(args->head);
	args->head = NULL;
}
