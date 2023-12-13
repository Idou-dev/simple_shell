#include "shell.h"

/**
 * free_arrstr - frees an array of strings
 * @command: 2D array
 */

void free_arrstr(char **command)
{
	int i;

	if (!command)
		return;
	for (i = 0; command[i]; i++)
	{
		free(command[i]);
		command[i] = NULL;
	}
	free(command);
	command = NULL;
}
