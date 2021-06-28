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


	j = i -1;
	
	for (i = 0 ; *(str + i) != '\0' ; i++)
	{	
		if (i >= (j / 2))
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
