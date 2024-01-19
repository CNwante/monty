#include "monty.h"

/*Betty docs goes here*/
void pop_stack(void)
{
    stack_t *temp;

    temp = args->head;
    args->head = temp->next;
    free(temp);
}