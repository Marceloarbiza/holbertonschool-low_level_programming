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

	i = c % 10;
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
