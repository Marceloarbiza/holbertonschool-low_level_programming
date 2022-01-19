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
	int i = 0, x, z;

	sqrt_double = sqrt(size);
	sqrt_int = (int)sqrt_double;


	if (!array)
		return (-1);

	if (array[i] == value)
		return (i);

	for (i = 0; i < size_i; i += sqrt_int)
	{
		z = i + sqrt_int;

		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if ((array[z] >= value) || (i == (int)size - 1))
		{
			printf("Value found between indexes [%d] and [%d]\n", i, z);
			if (z > (int)size)
				z = (int)size;
			for (x = i; x < z; x++)
			{
				printf("Value checked array[%d] = [%d]\n", (int)x, array[x]);
				if (array[x] == value)
					return ((int)x);
			}
		}
	}
	return (-1);
}
