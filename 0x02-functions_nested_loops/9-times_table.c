#include "holberton.h"
/**
 * times_table - table
 *
 */
void times_table(void)
{
	int i;
	int f;

	for (i = 0 ; i < 10 ; i++)
	{
		for (f = 0 ; f < 10 ; f++)
		{
			int g = i * f;

			if (g >= 10)
			{
				_putchar((g / 10) + '0');
			}
			else if (g < 10 && f > 0)
			{
				_putchar(' ');
			}
			_putchar((g % 10) + '0');
			if (f < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
