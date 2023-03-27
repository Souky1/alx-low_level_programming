#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char y;

	while (*s)
	{
		s++;
		j++;
	}
	for (i = 0; i < j; i++)
		s--;
	for (i = 0; i < (j / 2);  i++)
	{
		int p = j - 1;

		y = s[p - i];
		y = s[p - i];
		s[i] = y;
	}
}
