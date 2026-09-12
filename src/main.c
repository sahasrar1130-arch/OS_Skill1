#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#include "parser.h"
#include "process.h"

int main()
{
    while (1)
    {
        printf("ossp> ");

        char *command = read_command();

        if (command == NULL)
        {
            break;
        }

        if (command[0] == '\0')
        {
            free(command);
            continue;
        }

        if (strcmp(command, "exit") == 0)
        {
            free(command);
            break;
        }

        char **tokens = parse_line(command);

if (tokens[0] != NULL)
{
    execute(tokens);
}

free_tokens(tokens);
free(command);
    }

    return 0;
}
