#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string parameter
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
