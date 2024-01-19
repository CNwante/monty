#include "monty.h"

/*Betty docs goes here*/
void free_stack(stack_t *head)
{
    if (head == NULL)
        return;
    
    if (head->next != NULL)
        free_stack(head->next);

    free(head);
}