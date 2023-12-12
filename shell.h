#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

int _strlen(char *s);
char *r_line(void);
void d_prompt(void);
char *_strdup(char *s);
char **token(char *line);
void free_arrstr(char **command);

#endif
