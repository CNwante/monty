#include "monty.h"
#include <fcntl.h>
#include <stdio.h>

/*Include betty docs*/

void fopen_failed(char *file_name)
{
    fprintf(stderr, "Error: Can't open file%s\n", file_name);
    /*free_memory();*/
    exit(EXIT_FAILURE);
}

/*Include betty docs*/
void file_stream(char *file_name)
{
    args->stream = fopen(file_name, "r");
    if (args->stream == NULL)
    {
        fopen_failed(file_name);
    }
}
