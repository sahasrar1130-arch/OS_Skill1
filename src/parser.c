#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **parse_line(char *line)
{
    int buffer_size = 64;
    int position = 0;
    char **tokens;

    tokens = malloc(buffer_size * sizeof(char *));

    if (tokens == NULL)
    {
        perror("allocation error");
        exit(EXIT_FAILURE);
    }

    char *token = strtok(line, " \t\r\n");

    while (token != NULL)
    {
        tokens[position] = token;
        position++;

        if (position >= buffer_size)
        {
            buffer_size += 64;
            tokens = realloc(tokens, buffer_size * sizeof(char *));

            if (tokens == NULL)
            {
                perror("allocation error");
                exit(EXIT_FAILURE);
            }
        }

        token = strtok(NULL, " \t\r\n");
    }

    tokens[position] = NULL;

    return tokens;
}

void free_tokens(char **tokens)
{
    free(tokens);
}
