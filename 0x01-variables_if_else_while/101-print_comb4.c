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

	for (i = 0 ; i <= 9 ; i++)
	{
		for (z = 0 ; z <= 9 ; z++)
		{
			if (i != z &&  z > i)
			{
				for (c = 0 ; c <= 9 ; c++)
				{
					if (c != z && c != i && c > z)
					{
						putchar(i + '0');
						putchar(z + '0');
						putchar(c + '0');
					if (i + z + c < 24)
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
