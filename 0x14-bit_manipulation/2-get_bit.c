#include <stdio.h>
#include "main.h"

/**
 * get_bit - check the code
 * @n: n
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}

	n = n >> index;

	return (n & 1);
}
