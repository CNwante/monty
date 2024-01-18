#include "monty.h"

/*Betty docs goes here*/

void close_strem(void)
{
    if (args->stream == NULL)
        return;

    fclose(args->stream);
    args->stream = NULL;
}