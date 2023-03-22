#include"main.h"

/**
 * times_table - print the 9 times table
 * Return: output
 */
void times_table(void)
{
	int k, j, s;

	for (k = 0; k <= 9; k++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			s = k * j;

			if (s <= 9)
				_putchar(' ');
			else
				_putchar((s / 10) + 48);
			_putchar((s % 10) + 48);
		}
		_putchar('\n');
	}
}
