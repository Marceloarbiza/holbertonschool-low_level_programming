#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_search - linear search
* @array: array for search
* @size: size of the array
* @value: value to search in the array
* Return: index if find the value, -1 if not.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if(!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
