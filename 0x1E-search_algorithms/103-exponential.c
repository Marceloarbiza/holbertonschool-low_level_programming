#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_help - aux funtion
 * @array: array to search the value
 * @beg: beggin of the array
 * @end: end of the array
 * @value: value to find
 * Return: return the index if find the value, -1 if not
 */

int binary_help(int *array, size_t beg, size_t end, int value)
{
	size_t mid;
	size_t i;

	if (end >= beg)
	{
		printf("Searching in array: ");
		for (i = beg; i <= end; i++)
		{
			if (i < end)
				printf("%d, ", (int)array[(int)i]);
			else
				printf("%d\n", (int)array[(int)i]);
		}

		mid = (end + beg) / 2;

		if (array[(int)mid] == (int)value)
		{
			return ((int)mid);
		}
		else if (array[(int)mid] < (int)value)
		{
			beg = mid + 1;
			return (binary_help(array, beg, end, value));
		}
		else if (array[(int)mid] > (int)value)
		{
			end = mid - 1;
			return (binary_help(array, beg, end, value));
		}
	}
	return (-1);
}

/**
* exponential_search - linear search
* @array: array for search
* @size: size of the array
* @value: value to search in the array
* Return: index if find the value, -1 if not.
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t index_anterior;
	size_t beg;
	size_t end = size - 1;

	if (!array)
		return (-1);

	if (array[i] == value)
	{
		return ((int)i);
	}
	else
	{
		for (i = 1; i <= size; i *= 2)
		{
			if (i >= size)
				i = size - 1;
			if (array[i] == value)
				return (i);
			if ((array[i] > value) || (i == size - 1))
			{
				beg = index_anterior;
				end = i;
				printf("Value found between indexes [%ld] and [%ld]\n", beg, end);
				return (binary_help(array, beg, end, value));
			}
			printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
			index_anterior = i;
		}
	}
	return (-1);
}


