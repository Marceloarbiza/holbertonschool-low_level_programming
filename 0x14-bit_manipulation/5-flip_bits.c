#include <stdio.h>
#include "main.h"

/**
 * flip_bits - check the code
 * @n: int
 * @m: int
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, b; 

	x = n ^ m, 
	b = 0;

	while (x > 0)
	{
		b = (x & 1);
		x >>= -1;
	}

	return (b);
}
