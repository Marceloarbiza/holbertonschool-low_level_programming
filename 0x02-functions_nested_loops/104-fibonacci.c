#include <stdio.h>
/**
 * main - fib
 *
 * Return: zero
 */
int main(void)
{
	int i;

	double long a, b, c;

	a = 1;
	b = 1;

	for (i = 0 ; i < 98 ; i++)
	{
		c = a + b;
		if (i < 97)
		{
			printf("%.0Lf, ", c);
		}
		else
		{
			printf("%.0Lf", c);
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
