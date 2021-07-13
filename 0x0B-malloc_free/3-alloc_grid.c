#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - return pointer
 * @width: int
 * @height: int
 *
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **matriz = NULL;
	int i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}


	matriz = (int **)malloc(width * sizeof(int *));

	for (i = 0 ; i < width ; i++)
	{
		matriz[i] = (int *) malloc(height * sizeof(int));
	}

	for (j = 0 ; j < width ;  j++)
	{
		matriz[i] = 0;
		for (k = 0 ; k < height; k++)
		{
			matriz[i][j] = 0;
		}
	}

	return (matriz);
}
