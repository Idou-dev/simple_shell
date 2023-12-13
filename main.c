#include "shell.h"

/**
 * main - the entry function
 * @ac: argument counter
 * @av: argument vector
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	char *line = NULL, **command = NULL;
	int status = 0;
	(void)ac;
	(void)av;

	while (1)
	{
		line = r_line();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO) == 1)
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}
		command = token(line);
		if (!command)
			continue;
		status = _execve(command, av);
	}
	return (0);
}
