#include "monty.h"

/*Betty docs goes here*/

void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *item;

    if (args->head == null)
        return;

    (void) line_number;
    (void) stack;

    item = args->head;
    while(item != NULL)
    {
        printf("%d\n", item->n);
        item = item->next;
    }
}