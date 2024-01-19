#include "monty.h"

/**
 * malloc_failed - Handles the error when malloc fails to allocate memory.
 */
void malloc_failed(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	free_args_mem();
	exit(EXIT_FAILURE);
}
