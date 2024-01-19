#include "monty.h"

void pint(stack_t **stack, unsigned int line_number)
{
    (void) stack;
    if (args->head == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        free_all_mem();
        exit(EXIT_FAILURE);
    }

    printf("%d\n", args->head->n);
}