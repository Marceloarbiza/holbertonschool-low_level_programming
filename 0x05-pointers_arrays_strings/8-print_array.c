#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a:char
 * @n:char
 *
 */
void print_array(int *a, int n)
{
	int i;
	int arint[999];
	int j;

	for (i = 0 ; i < n ; i++)
	{
		arint[i] = *(a + i);
	}
	i = 0;
	for (i = 0 ; i < n ; i++)
	{
		j = arint[i];
		if (i < n - 1)
		{
			printf("%d, ", j);
		}
		else
		{
			printf("%d", j);
		}
	}
	printf("\n");
}
