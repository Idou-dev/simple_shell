#include "shell.h"

/**
 * r_line - reads line from standard input
 * Return: the line it reads
 */

char *r_line(void)
{
	char *lin = NULL;
	size_t l = 0;
	ssize_t n;

	if (isatty(STDIN_FILENO) == 1)
		d_prompt();
	n = getline(&lin, &l, stdin);
	if (n == -1)
	{
		free(lin);
		return (NULL);
	}
	return (lin);
}
