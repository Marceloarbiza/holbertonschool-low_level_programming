#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * int_index - int index
  * @array: int
  * @size: int
  * @cmp: int
  *
  * Return: int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j, k = 0;

	if (size <= 0 || !array || !cmp)
	{
		return (-1);
	}
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			j = cmp(array[i]);

			if (j == 1)
				return (i);
			k += j;
		}

		if (j == 0)
			return (-1);
	}
	return (-1);
}
