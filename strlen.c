#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length of a s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
