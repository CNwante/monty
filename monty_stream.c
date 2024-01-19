#include "monty.h"
#include <fcntl.h>
#include <stdio.h>

/**
 * fopen_failed - Handles the error when file fails to open.
 * @file_name: The name of the file that failed to open.
 */
void fopen_failed(char *file_name)
{
	fprintf(stderr, "Error: Can't open file%s\n", file_name);
	free_args_mem();
	exit(EXIT_FAILURE);
}

/**
 * file_stream - Gets the stream for reading from the specified file.
 * @file_name: Name of the file to open and set as the stream.
 */
void file_stream(char *file_name)
{
	args->stream = fopen(file_name, "r");
	if (args->stream == NULL)
		fopen_failed(file_name);
}
