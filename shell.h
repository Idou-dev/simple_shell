#ifndef SHELL__H
#define SHELL__H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdarg.h>
#include <signal.h>
#include <inttypes.h>
#include <errno.h>
#include <fcntl.h>


int shell_loop(char **argv, int count);








#endif
