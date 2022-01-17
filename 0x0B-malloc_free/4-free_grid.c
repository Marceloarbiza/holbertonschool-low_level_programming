#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free grid
 *@grid: int
 *@height: int
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid)
	{
	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
	}
}
