#include <stdio.h>
/**
 * main - iqual
 *
 * Return: zero
 */
int main(void)
{
        int i;
        int z;
        int c;
	int d;

        for (i = 0 ; i <= 9 ; i++)
        {
                for (z = 0 ; z <= 9 ; z++)
                {
                        
                        
                                for (c = 0 ; c <= 9 ; c++)
                                {
					for (d = 0 ; d <= 9 ;  d++)
					{
                                        	if (c != d && d > c)
                                        	{
                                                	putchar(i + '0');
                                                	putchar(z + '0');
							putchar(' ');
                                               		putchar(c + '0');
							putchar(d + '0');
                                        	if (i + z + c + d < 35)
                                        	{
                                                	putchar(',');
                                                	putchar(' ');
                                        	}
                                        	}
					}
                                }

                }
        }
        putchar('\n');
        return (0);
}
