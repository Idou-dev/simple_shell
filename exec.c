#include "shell.h"

/**
 * _execve - executes a program
 * @com: 2D array
 * @av: 2d array
 * Return: the exit status
 */

int _execve(char **com, char **av)
{
	pid_t child;
	int status, n;

	child = fork();
	if (child == 0)
	{
		if (execve(com[0], com, environ) == -1)
		{
			perror(av[0]);
			free_arrstr(com);
			exit(127);
		}
	}
	else
	{
		waitpid(child, &status, 0);
		free_arrstr(com);
	}
	n = WEXITSTATUS(status);
	return (n);
}
