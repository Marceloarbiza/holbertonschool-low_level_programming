#include "holberton.h"
/**
 * more_numbers - nombers
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0 ; j <= 9 ; j++)
	{

	for (i = 0 ; i <= 14 ; i++)
	{
		if (i > 9)
		{
		_putchar ((i / 10) + '0');
		_putchar ((i % 10) + '0');
		}
		else if (i < 9)
		{
		_putchar ((i % 10) + '0');
		}
	}

	j++;

	_putchar ('\n');

	}
}
