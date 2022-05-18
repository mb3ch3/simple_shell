#ifndef MAIN_H
#define MAIN_H

#define TRUE (1 == 1)

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>

/* path */
int _path(char *first, char **input, char **env, int *ex_St);

/* environment */
int printenv(char **env, int *ex_st);
char *cpy_env(char **env);

/* built-ins and execute function */
void builtins(char *line, char **args, char **env, int *ex_st);
void _execute(int status, char **args, int *ex_st, int *tal);

/* functions related to strings  strings.c */
int _strlen(char *s);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);

/* functions related to printing to std output printf.c */
int _putchar(char c);
void print_str(char *s);
void print_int(int *tal);
char *pathstr(char *right, char *first);
char **parser(char *l);

/* helper functions helper_functions.c */
void no_nl(char *l);
void free_grid(char **grid, int height);
int special_char(char *buffer, ssize_t bytes, int *ex_st);

#endif
