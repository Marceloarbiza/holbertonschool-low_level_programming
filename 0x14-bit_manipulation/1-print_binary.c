#include <stdio.h>
#include "main.h"

/**
 * print_binary - check the code
 * @n: uli
 */
void print_binary(unsigned long int n)
{
	if (!n)
		return;

	if (n >= 1)
	{
		print_binary(n / 2);
		_putchar((n % 2) + '0');
	}
}
