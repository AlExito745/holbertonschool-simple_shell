#ifndef SHELL
#define SHELL
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>
#include <signal.h>
char *read_line(void);
char **splits(char *line, char *delim);
int execute(char **parse);
char **find_path(char **environ);
char *args_path(char **parse, char **tokens);

#endif
