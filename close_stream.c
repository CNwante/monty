#include "monty.h"

/**
 * close_stream - Closes the file stream and sets it to NULL.
 */

void close_strem(void)
{
	if (args->stream == NULL)
		return;
	fclose(args->stream);
	args->stream = NULL;
}
