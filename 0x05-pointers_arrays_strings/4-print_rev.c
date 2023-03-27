#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to print in reverse
 */
void print_rev(char *s)
{
	int x = 0;

	while (*s)
	{
		x++;
		s++;
	}
	while (x)
	{
		s--;
		_putchar(*s);
		x--;
	}
	_putchar('\n');
}
