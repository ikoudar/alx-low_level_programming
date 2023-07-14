#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  *free_grid- function that frees a 2 dimensional grid.
  *@grid: first integer
  *@height: second integer
  *
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
