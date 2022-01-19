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
	int index_anterior;
	int i, x;

	sqrt_double = sqrt(size);
	sqrt_int = (int)sqrt_double;


	if (!array)
		return (-1);

	for (i = 0; i < size_i; i += sqrt_int)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", index_anterior, i);
			for (x = index_anterior; x <= i; x++)
			{
				printf("Value checked array[%d] = [%d]\n", (int)x, array[x]);
				if (array[x] == value)
					return (x);
			}
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		index_anterior = i;
	}
	return (-1);
}
