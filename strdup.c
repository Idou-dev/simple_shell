#include "shell.h"

/**
 * _strdup - duplicates a string
 * @s: the string to be duplicated
 * Return: duplicated string
 */

char *_strdup(char *s)
{
	char *sptr;
	int i, len = 0;

	if (s == NULL)
		return (NULL);
	len = _strlen(s);
	sptr = malloc(sizeof(char) * (len + 1));
	if (sptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		sptr[i] = s[i];
	}
	return (sptr);
}
