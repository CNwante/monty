#include "monty.h"

/*Betty docs goe here*/
void invalid_opcode(void)
{
    fprintf(stderr, "L%d: unknown instruction %s\n", args->line_number, args->tokens[0]);
    close_strem();
    free_tokens_mem();
    free_args_mem();
    exit(EXIT_FAILURE);
}

/*Betty docs goe here*/

void get_opcode(void)
{
    int i = 0;
    instruction_t actions[] = {
        {"push", &push}, {"pop", &pop},
        {"pint", &pint}, {"swap", &swap},
 /*       {"nop", &nop}, {"add", &add},*/
        {"pall", &pall}, /* {"sub", &sub},*/
     /*   {"div", &_div}, {"mul", &mul},*/
     /*   {"rotl", &rotl}, {"rotr", &rotr},*/
    /*    {"stack", &stack}, {"queue", &queue},*/
   /*     {"pstr", &pstr}, {"pchar", &pchar},*/
       /* {"mod", &mod},*/
	       	{NULL, NULL}
    };

    if (args->num_tokens == 0)
        return;

    while (actions[i].opcode != NULL)
    {
        if (strcmp(actions[i].opcode, args->tokens[0]) == 0)
        {
            args->instruction->opcode = actions[i].opcode;
            args->instruction->f = actions[i].f;
            return;
        }
        i++;
    }
    invalid_opcode();
}
