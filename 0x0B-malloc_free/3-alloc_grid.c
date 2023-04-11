#include"main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, t = 0;
	int **s;

	if (width <= 0 || height <= 0)
		return (0);
	s = malloc(height * sizeof(int *));
	if (s == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		*(s + i) = malloc(width * sizeof(int));
		if (*(s + i) == 0)
		{
			t = 0;
			break;
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	if (t == 1)
	{
		for (k = 0; k <= i; i++)
		{
			free(*(s + k));
		}
		free(s);
	}
	return (s);
}
