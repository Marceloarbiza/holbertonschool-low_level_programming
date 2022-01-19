#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search algorithm
 * @array: array to search
 * @size: size of the array
 * @value: value to find
 * Return: index if find, -1 if not
 */
int jump_search(int *array, size_t size, int value)
{
	double sqrt_double;
	int sqrt_int;
	int size_i = (int)size;
	int i = 0, x = 0;

	sqrt_double = sqrt(size);
	sqrt_int = (int)sqrt_double;
	if (!array || array[0] > value)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", i, array[i]);

	while (i + sqrt_int < size_i)
	{
		if (array[i + sqrt_int] < value)
		{
			printf("Value checked array[%d] = [%d]\n",
				i + sqrt_int, array[i + sqrt_int]);
			i += sqrt_int;
		}
		else
			break;
	}
	printf("Value found between indexes [%d] and [%d]\n", i, i + sqrt_int);

	for (x = i; x < size_i; x++)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
