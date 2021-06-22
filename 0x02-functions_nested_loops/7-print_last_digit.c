#include "holberton.h"
/**
 * print_last_digit - last digit
 * @c:character
 *
 * Return: int
 */
int print_last_digit(int c)
{	
	int i;

	if (c < 0)
	{
		i = c * -1;
	}
	_putchar((i % 10) + '0');
	return (i % 10);
}
