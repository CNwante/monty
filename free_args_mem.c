#include "monty.h"

/**
* free_args_mem - Frees memory allocated to arguments pointer.
*/
void free_args_mem(void)
{
	if (args == NULL)
		return;

	if (args->instruction)
	{
		free(args->instruction);
		args->instruction = NULL;
	}
	free_head();

	if (args->text_line)
	{
		free(args->text_line);
		args->text_line = NULL;
	}
	free(args);
}
