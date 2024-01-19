#include "monty.h"

/*Betty docs goes here*/
void free_all_mem(void)
{
    close_strem();
    free_tokens_mem();
    free_args_mem();
}