#include <stdio.h>
#include "main.h"

/**
 * set_bit - set bit
 * @n: uli
 * @index: uli
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
	{
		return (-1);
	}

	*n |= (1 << index);

	return (1);
}
