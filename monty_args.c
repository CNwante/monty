#include "monty.h"

void validate_args(int argc)
{
    if (argc == 2)
    {
        return;
    }

    fprintf(stderr, "USAGE: monty file\n");
    exit(EXIT_FAILURE);
}