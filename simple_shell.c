#include "shell.h"

/**
 * main - entry point for simple shell
 * @argc: argument counts.
 * @argv: an array of strings.
 * Return: 0 or -1.
 */
int main(int argc, char *argv[])
{
	char *stk[10], *av[] = {NULL}, *line = NULL;

	if (argc != 1)
	{
		return (0);
	}
	while(1)
	{
		_puts("$ ");
	}
	return (0);
}
