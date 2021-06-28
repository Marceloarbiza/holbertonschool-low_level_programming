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
	
	j = i / 2;

	for (j ; j <= i ; j++)
	{
		_putchar(*(str + j));
	}
}
