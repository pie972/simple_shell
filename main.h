#ifndef MAIN.H
#define MAIN.H

#define TRUE (1 == 1)

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>
#include <signal.h>

/* path */
char **find_path(char **environ);

/* environment */
char *_getenv(char **environ, char *dirname);

/* built-ins & execute function */
void builtins(char *line, char **args, char **env, int *ex_st);
int execute(char **parse);

/* helpers.c: helper functions */
char *read_line(void);
char **splits(char *line, char *delim);
char *if_exists(char **environ);
extern char **environ;

/* strings.c: functions related to strings */
unsigned int _strlen(char *s);
char *_strdup(char *str);
int _strcmp(char *varname, char *dirname);
char *_strcat(char *dest, char *src);

/* printf.c: functions related to printing strings/characters/numbers */
int _putchar(char c);
void _puts(char *str);
void print_str(char *s);
void print_int(int *tal);
char *args_path(char **parse, char **tokens);

#endif
