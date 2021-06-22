#include "holberton.h"
/**
 * print_to_98 - print
 * @n: character
 *
 */
void print_to_98(int n)
{
	int i;
	int g;
	
	if (n <= 98){
		for (i = n ; i <= 98 ; i++)
		{
			if (i < 10)
			{
				if(i >= 0)
				{
					_putchar((i % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else if (i < 0) 
				{
					g = i * -1;
					if (g >= 100)
					{
						_putchar('-');
						_putchar((g / 100)+ '0');
						_putchar((g / 10) % 10 + '0');
						_putchar((g % 10) + '0');
						_putchar(',');
						_putchar(' ');
					}
					if (g < 10)
					{
						_putchar('-');
						_putchar((g % 10) + '0');
						_putchar(',');
						_putchar(' ');
					}
					else if (g >= 10 && g < 100)
					{
						_putchar('-');
						_putchar((g / 10) + '0');
						_putchar((g % 10) + '0');
						_putchar(',');
						_putchar(' ');
					}				
				}
			}
			else if (i == 98)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			_putchar(' ');
			}
		}
	}
        if (n > 98){
                for (i = n ; i >= 98 ; i--)
                {
			if (i >= 100)
			{
                        	_putchar((i / 100) + '0');
				_putchar((i / 10) % 10 + '0');
                        	_putchar((i % 10) + '0');
                        	_putchar(',');
                        	_putchar(' ');
			}
			else if (i == 98)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
                }
        }
	_putchar('\n');
}
