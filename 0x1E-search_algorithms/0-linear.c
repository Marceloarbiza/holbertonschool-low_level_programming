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
	int i;
	int size_i = (int)size;

	if(!array)
		return (-1);
	for (i = 0; i < size_i; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
