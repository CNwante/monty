#include "monty.h"

/**
* comment - Checks the tokens if it starts with '#'
* Return: 1 if it is a comment, otherwise 0
*/
int comment(void)
{
	if (
		args->tokens &&
		args->tokens[0] &&
		args->tokens[0][0] == '#'
	)
		return (1);

	return (0);
}
