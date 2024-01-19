#define _GNU_SOURCE
#define _POSIX_C_SOURCE 200809L
#include "monty.h"

argument_t *args = NULL;

/**
 * main - Entry point of the monty program.
 * @argc: The number of command-line arguments.
 * @argv: A pointer to an array of the command-line arguments.
 *
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
	size_t n = 0;

	validate_args(argc);
	init_args();
	file_stream(argv[1]);

	while (getline(&args->text_line, &n, args->stream) != -1)
	{
		args->line_number += 1;
		tokenize();
		get_opcode();
		exec_opcode();
		free_tokens_mem();
	}

	close_strem();
	free_args_mem();
	return (0);
}
