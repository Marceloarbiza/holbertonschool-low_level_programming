#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - check the code
 * @b: char
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int sum = 0;
	int mul = 1;

	if (!b)
		return (NULL);

	for (; b[i] ; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	while (i >= 0)
	{
		if (b[i] == '1')
		{
			sum += mul;
			mul *= 2;
		}
		else if (b[i] == '0')
		{
			mul *= 2;
		}
		i--;
	}
	return (sum);

}
