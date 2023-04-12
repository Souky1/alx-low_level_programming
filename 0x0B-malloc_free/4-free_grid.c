#include"main.h"
#include<stdlib.h>

/**
 * free_grid - frees 2  dimensional grid previously created by the function
 * @grid: double pointer
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
