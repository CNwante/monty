#include "monty.h"

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
    int fd;

    fd = open(file_name, O_RDONLY);
    if (fd == -1)
    {
        fopen_failed(file_name);
    }
    
    args->stream = fopen(fd, "r");
    if (args->stream == NULL)
    {
        close(fd);
        fopen_failed(file_name);
    }
}
