#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack
 * @stack: Pointer to the stack
 * @line_number: Line number where the command is
 */
void swap(stack_t **stack, unsigned int line_number)
{
    stack_t *current, *temp;

    (void) stack;
    if (args->stack_length < 2)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        /*free_all_args();*/
        exit(EXIT_FAILURE);
    }

    current = args->head;
    temp = current->next;
    current->next = temp->next;
    if (current->next)
        current->next->prev = current;
    temp->next = current;
    current->prev = temp;
    temp->prev = NULL;
    args->head = temp;
}