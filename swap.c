#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack
 * @stack: Pointer to the stack
 * @line_number: Line number where the command is
 */
void swap(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack, *temp = NULL;

    // Check if the stack has at least two elements
    if (current == NULL || current->next == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        cleanup_and_exit(*stack);
    }

    // Move to the last node
    while (current->next != NULL)
        current = current->next;

    // Swap the top two elements
    temp = current->prev;

    // Update next pointer of previous node
    if (temp->prev != NULL)
        temp->prev->next = current;

    // Update next pointer of the current node
    current->next = temp->next;

    // Update prev pointers
    temp->prev = current->prev;
    current->prev = temp;

    // Update next pointer of the temp node
    temp->next = current;
}

/**
 * cleanup_and_exit - Cleanup function before program exit
 * @stack: Pointer to the stack
 */
void cleanup_and_exit(stack_t *stack)
{
    // Add cleanup code specific to your program

    // Example: Free dynamically allocated memory in the stack
    free_stack(stack);

    // Other cleanup actions, if needed

    // Exit the program
    exit(EXIT_FAILURE);
}

/**
 * free_stack - Frees the memory allocated for the stack
 * @stack: Pointer to the stack
 */
void free_stack(stack_t *stack)
{
    // Add code to free any dynamically allocated memory in the stack
    // (Assuming stack is a linked list and each node needs to be freed)
    stack_t *current = stack, *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}
