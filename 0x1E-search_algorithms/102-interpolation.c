#include "search_algos.h"

/**
 * interpolation_help - aux function
 * @array: array to search the value
 * @beg: beggin of the array
 * @end: end of the array
 * @value: value to find
 * Return: return the index if find the value, -1 if not
 */
int interpolation_help(int *array, size_t beg, size_t end, int value)
{
	size_t pos = beg + (((double)(end - beg) / (array[end] - array[beg]))
			* ((size_t)value - array[beg]));

	if (pos > end)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	if (end >= beg)
	{
		if (array[(int)pos] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return ((int)pos);
		}
		else if (array[(int)pos] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			beg = pos + 1;
			return (interpolation_help(array, beg, end, value));
		}
		else if (array[(int)pos] > value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			end = pos - 1;
			return (interpolation_help(array, beg, end, value));
		}
	}
	return (-1);
}

/**
 * interpolation_search - interpolation search function
 * @array: array to search the value
 * @size: size of the array
 * @value: value to find
 * Return: return the index if find the value, -1 if not
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t beg = 0;
	size_t end = size - 1;

	if (array)
		return (interpolation_help(array, beg, end, value));
	else
		return (-1);
}
