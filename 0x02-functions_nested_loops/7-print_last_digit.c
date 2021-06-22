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
	_putchar(i);
	return (i);
}
