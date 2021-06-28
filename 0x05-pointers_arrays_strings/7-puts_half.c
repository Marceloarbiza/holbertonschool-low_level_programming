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


	for (j = 0 ; j < i ; j++)
	{	
		if (j >= (i / 2))
		{
		_putchar(*(str + j));
		}
	}
	_putchar('\n');
}
