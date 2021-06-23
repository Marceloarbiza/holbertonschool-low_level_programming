#include <stdio.h>
/**
 *
 *
 */
int main(void)
{
	int i;
	int a;
	int b;
	int c;

	a = 1;
	b = 1;

	printf("%d, ", a);
	printf("%d, ", b);

	for (i = 0 ; i < 50 ; i++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
