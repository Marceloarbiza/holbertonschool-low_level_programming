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
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}


	matriz = (int **)malloc(width * sizeof(int *));

	for (i = 0 ; i < width ; i++)
	{
		matriz[i] = (int *) malloc(height * sizeof(int));
	}

	return (matriz);
}
