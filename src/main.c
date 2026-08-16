#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"

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

        printf("You entered: %s\n", command);

        free(command);
    }

    return 0;
}
