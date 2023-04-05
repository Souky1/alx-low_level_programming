#include"main.h"

/**
 * _strlen_recursion - length of string
 * @s: string
 * Return: a
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a += _strlen_recursion(s + 1);
		a++;
	}
	return (a);
}
