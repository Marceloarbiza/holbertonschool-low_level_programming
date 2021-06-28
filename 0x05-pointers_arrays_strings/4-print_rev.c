#include "holberton.h"
/**
 * print_rev - reverse
 * @s:character
 *
 */
void print_rev(char *s)
{
	int i;
	int j;

	int j = _strlen(*s);

	for (int i = j ; *(s + j) != '\0' ; j--)
	{
		_putchar(*(s + j));
	}
}
