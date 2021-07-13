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
	int **m1 = NULL;
	int *m2 = NULL;
	int i = 0, j = 0, k = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	m1 = malloc(sizeof(int *) * height);

	if (m1)
	{
		for (i = 0 ; i < height ; i++)
		{
			m2 = malloc(sizeof(int) * width);

			if (m2)
			{
				for (j = 0 ; j < width ; j++)
				{
					m2[j] = 0;
				}
			}
			else
			{
				k = 1;
			}
			m1[i] = m2;
			if (k)
			{
				for (j = 0 ; j < height ; j++)
				{
					free(m1[j]);
				}
			}
		}
	}

	return (m1);
}
