#include <stdio.h>
/**
 * main - fibonacci four milloni
 *
 * Return: int
 */
int main(void)
{
        long a;
        long b;
        long c;
	long res;

        a = 1;
        b = 1;

        while (res < 5000000)
        {
                c = a + b;
		if (c % 2 == 0)
		{
			res = res + c;
		}
                a = b;
                b = c;

        }
	printf("%ld", res);
        printf("\n");
        return (0);
}
