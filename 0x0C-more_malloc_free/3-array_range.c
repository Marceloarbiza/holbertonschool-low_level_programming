#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - range
 * @min: int
 * @max: int
 *
 * Return: in
 */
int *array_range(int min, int max)
{
	int *nray = NULL;
	int i;
	int dif = 0;

	if (min > max)
		return (NULL);

	dif = max - min;

	if (min < 0)
	{
	nray = malloc(sizeof(int) * (dif + 1));
	}
	else
	{
	nray = malloc(sizeof(int) * dif);
	}

	if (!nray)
		return (NULL);

	for (i = 0 ; i < dif ; i++)
	{
		nray[i] = min;
		min++;
	}

	return (nray);
}
