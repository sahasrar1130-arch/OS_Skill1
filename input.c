#include <stdio.h>
#include <stdlib.h>
#include "input.h"

char *read_command(void)
{
    int capacity = 10;
    int length = 0;

    char *buffer = malloc(capacity);

    if (buffer == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    int ch;

    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        if (length + 1 >= capacity)
        {
            capacity = capacity * 2;

            char *temp = realloc(buffer, capacity);

            if (temp == NULL)
            {
                free(buffer);
                printf("Memory reallocation failed\n");
                exit(1);
            }

            buffer = temp;
        }

        buffer[length] = ch;
        length++;
    }

    buffer[length] = '\0';

    return buffer;
}
