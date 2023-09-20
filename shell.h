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
#include <stdbool.h>

extern char **environ;

/**
 * struct high - a helper function
 * @interactive_mod: interactive mode
 */
struct high
{
	bool interactive_mod;
} high;

int _putchar(char c);
int _strlen(char *s);
void _puts(char *str);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2, int n);
char *_strdup(char *str);
char *_strchr(const char *str, int c);
char **_strtok(char *line, char *stk[]);
int main(int argc __attribute__((unused)), char *argv[], char **envp);
void _fork(char *stk[], char *av[], char *envp[], char *argv[]);
char *_getline(char *lineptr);
int test_white_space(char *str);
char *_getenv(char *name, char **envp);
void print_prompt(void);
void exe(char **stk, char *envp[], char *argv[], char *line);
char *_which(char *command, char **env);
void hight(int no);
int simicolen(char *line, char *envp[], char *argv[]);
char *strtokenize(char *line, char delimiter);
int shexit(char *line);

#endif
