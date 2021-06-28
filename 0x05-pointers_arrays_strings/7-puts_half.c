#include "holberton.h"
/**
 * puts_half - half
 * @str:charact
 *
 */
void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0 ; *(str + i) != '\0' ; i++)
	{
		continue;
	}

	for (j = (i / 2) - 1 ; j < i ; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
