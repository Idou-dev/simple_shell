#include "shell.h"

/**
 * token - tokenizing a string
 * @line: the string to be toknized
 * Return: 2d array
 */

char **token(char *line)
{
	char *tok, *delim = " \t\n", *tmp = NULL;
	char **command = NULL;
	int len = 0, i = 0;

	tmp = _strdup(line);
	tok = strtok(tmp, delim);
	if (tok == NULL)
	{
		free(line);
		line = NULL;
		free(tmp);
		tmp = NULL;
		return (NULL);
	}
	while (tok)
	{
		len++;
		tok = strtok(NULL, delim);
	}
	free(tmp);
	tmp = NULL;
	command = malloc(sizeof(char *) * (len + 1));
	if (!command)
	{
		free(line);
		line = NULL;
		return (NULL);
	}
	tok = strtok(line, delim);
	while (tok)
	{
		command[i] = _strdup(tok);
		tok = strtok(NULL, delim);
		i++;
	}
	free(line);
	line = NULL;
	command[i] = NULL;
	return (command);
}
