#include <stdio.h>
/**
 * main - fibonacci
 *
 * Return: int
 */
int main(void)
{
	int i;
	long a;
	long b;
	long c;

	a = 1;
	b = 1;

	printf("%ld, ", a);

	for (i = 0 ; i < 49 ; i++)
	{
		c = a + b;
		if (i < 48)
		{
			printf("%ld, ", c);
		}
		else
		{
			printf("%ld", c);
		}

		a = b;
		b = c;

	}
	printf("\n");
	return (0);
}
