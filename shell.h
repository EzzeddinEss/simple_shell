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
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2, int n);
char *_strdup(char *str);
char *_strchr(const char *str, int c);
char **_strtok(char *line, char *stk[]);
int main(int argc, char *argv[]);

#endif
