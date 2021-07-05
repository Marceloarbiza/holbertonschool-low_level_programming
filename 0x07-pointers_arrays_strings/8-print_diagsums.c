#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - diagmus
 * @a: int
 * @size: int
 *
 */
void print_diagsums(int *a, int size)
{
	int i, res1, res2;

	res1 = 0;
	res2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		res1 += a[(size + 1) * i];
		res2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", res1, res2);
}
