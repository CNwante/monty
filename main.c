#define _POSIX_C_SOURCE 200809L
#include "monty.h"

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