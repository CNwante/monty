#include "monty.h"

/**
 * init_args - Initializes a pointer to struct argument_s
 */

void init_args()
{
    args = malloc(sizeof(argument_t));
    if (args == NULL)
        malloc_failed();

    args->instruction = malloc(sizeof(instruction_t));
    if (args->instruction == NULL)
        malloc_failed();

    args->stream = NULL;
    args->text_line = NULL;
    args->num_tokens = 0;
    args->line_number = 0;
}