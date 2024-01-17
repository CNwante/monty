#include "monty.h"

int main(int argc, char **argv)
{
    size_t n = 0;

    validate_args(argc);
    init_args();
    file_stream(argv[1]);

    while (getline(&args->text_line, &n, args-stream) != -1)
    {
        printf("%s", args->text_line);
    }

    return (0);
}