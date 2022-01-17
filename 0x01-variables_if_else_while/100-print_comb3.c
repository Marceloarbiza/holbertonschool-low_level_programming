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

	for (i = 0 ; i <= 9 ; i++)
	{
		for (z = 0; z <= 9 ; z++)
		{
			if (i != z && z > i)
			{
				putchar(i + '0');
				putchar(z + '0');
				if (i + z < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
