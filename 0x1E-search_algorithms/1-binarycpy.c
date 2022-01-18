#include "search_algos.h"

/**
 * binary_help - aux funtion
 * @array: array to search the value
 * @beg: beggin of the array
 * @end: end of the array
 * @value: return the index if find the value, -1 if not
 */

int binary_help(int *array, size_t beg, size_t end, int value)
{
	size_t mid;
	size_t i;

	printf("Searching in array: ");
	for (i = beg; i < end; i++)
		printf("%d, ", (int)i);

	if (end >= beg)
	{
		mid = (end - beg) / 2;
	}

	if (array[mid] == (int)value)
	{
		return ((int)mid);
	}
	else if (array[mid] < (int)value)
	{
		beg = mid + 1;
		return (binary_help(array, beg, end, value));
	}
	else if (array[mid] > (int)value)
	{
		end = mid - 1;
		return (binary_help(array, beg, end, value));
	}
	return (-1);	
}

/**
 * binary_search - binary search funtion
 * @array: array to search the value
 * @size: size of the array
 * @value: value to find
 * Return: return the index if find the value, -1 if not
 */
int binary_search(int *array, size_t size, int value)
{
        size_t beg = 0;
	size_t end = size - 1;
	size_t i;

	printf("Searching in array: ");
	for (i = beg; i < end; i++)
		printf("%d, ", (int)i);

	if (array)
        	binary_help(array, beg, end, value);
	return (-1);
}
