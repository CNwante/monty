#include "monty.h"

/**
 * validate_args - Checks the number of command-line arguments.
 * @argc: The number of command-line arguments.
 */
void validate_args(int argc)
{
	if (argc == 2)
		return;
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
