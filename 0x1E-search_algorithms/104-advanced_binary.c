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
			if (array[(int)mid - 1] == (int)value)
				return (binary_help(array, beg, mid, value));
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
		else
			return (-1);
	}
	return (-1);
}

/**
 * advanced_binary - advanced binary search function
 * @array: array to search the value
 * @size: size of the array
 * @value: value to find
 * Return: return the index if find the value, -1 if not
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t beg = 0;
	size_t end = size - 1;

	if (array)
		return (binary_help(array, beg, end, value));
	else
		return (-1);
}
