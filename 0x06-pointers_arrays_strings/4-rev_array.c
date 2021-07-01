#include "holberton.h"
/**
 * reverse_array - reverse array
 * @a: int
 * @n: int
 *
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int b[999];

	for (i = 0 ; i <= n ; i++)
	{
		b[i] = *(a + i);
	}

	i = 0;
	j = n - 1;

	for (i = 0 ; i <= n ; i++)
	{
		*(a + i) = b[j];
		j--;
	}
}
