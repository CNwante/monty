#include "monty.h"

void tokenize(void)
{
    int i = 0;
    char *strdelim = " \n", *token = NULL, *linecpy = NULL;

    linecpy = malloc(sizeof(char) * (strlen(args->text_line) + 1));
    /*remember to check for failed malloc here later*/
    strcpy(linecpy, args->text_line);
    args->num_tokens = 0;
    token = strtok(linecpy, strdelim);

    while (token)
    {
        args->num_tokens += 1;
        token = strtok(NULL, strdelim);
    }

    args->tokens = malloc(sizeof(char *) * (args->num_tokens + 1));
    strcpy(linecpy, args->text_line);
    token = strtok(linecpy, strdelim);

    while (token)
    {
        args->tokens[i] = malloc(sizeof(char ) * (strlen(token) + 1));
        if (args->tokens[i] == NULL)
            malloc_failed();
        strcpy(args->tokens[i], token);
        token = strtok(NULL, strdelim);
        i++;
    }

    args->tokens[i] = NULL;
    free(linecpy);
}