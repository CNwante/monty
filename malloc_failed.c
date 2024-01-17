#include "monty.h"

/*Include betty doc*/

void malloc_failed(void)
{
    fprintf(stderr, "Error: malloc failed\n");
    /*free_memory();*/
    exit(EXIT_FAILURE);
}