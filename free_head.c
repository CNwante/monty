#include "monty.h"

/*Betty docs goes here*/

void free_head(void)
{
    if (args->head)
        free_stack(args->head);
    args->head = NULL;
}