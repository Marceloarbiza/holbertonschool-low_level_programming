#include "holberton.h"
/**
 * print_square - aquare
 * @size: char
 *
 */
void print_square(int size)
{
	int i, j;

	for (i = 0 ; i < size ; i++)
	{
		_putchar (35);
		
		for (j = 0 ; j < size ; j++)
		{
			_putchar (35);
		}
		_putchar ('\n');
	}
	if (size <= 0)
	{
		_putchar ('\n');
	}	
}
