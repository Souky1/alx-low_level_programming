#include"main.h"

/**
 * puts_half - print half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int f = 0, i;

	while (*str)
	{
		f++;
		str++;
	}
	for (i = 0; i < f; i++)
		str--;
	i = (f % 2 == 0) ? f / 2 : (f + 1) / 2;
	for (; i < f; i++)
		_putchar(str[i]);
	_putchar('\n');
}
