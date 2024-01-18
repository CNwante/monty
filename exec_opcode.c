#include "monty.h"

/*Betty docs goes here*/

void exec_opcode(void)
{
    stack_t *stack = NULL;

    if (args->num_tokens == 0)
        return;

    args->instruction->f(&stack, args->line_number);
}