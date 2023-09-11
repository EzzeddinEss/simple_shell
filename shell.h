#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdarg.h>
#include <limits.h>
#include <sys/wait.h>

int _putchar(char c);
int _strlen(char *s);
void _puts(char *str);

#endif