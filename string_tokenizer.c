#include "shell.h"

/**
 * strtokenize - Tokenizes a string using a specified delimiter
 * @line: The string to tokenize
 * @delimiter: The delimiter character
 * Return: A pointer to the new string token
 */
char *strtokenize(char *line, char delimiter)
{
    char *token;

    token = strtok(line, &delimiter);
    return (token);
}
