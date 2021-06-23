#include <stdio.h>
#include "holberton.h"
/**
 * print_times_table - print times
 * @n: character
 */
void print_times_table(int n)
{
	long i, f;

	if (n < 15 && n > 0)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (f = 0 ; f <= n ; f++)
			{

					long g = i * f;

					if (g >= 10 && g < 100)
					{
						_putchar(' ');
						_putchar((g / 10) + '0');
					}
					else if (g < 10 && f > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					if (g >= 100)
					{
						_putchar((g / 100) + '0');
						_putchar(((g / 10) % 10) + '0');
						_putchar((g % 10) + '0');
					}
					else
					{
						_putchar((g % 10) + '0');
					}
					if (f < n)
					{
						_putchar(',');
						_putchar(' ');
					}
			}
			_putchar('\n');
		}
	}
}
