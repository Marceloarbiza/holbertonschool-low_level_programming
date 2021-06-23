#include <stdio.h>
/**
 * main - fibonacci four milloni
 *
 * Return: int
 */
int main(void)
{
        int i;
        long a;
        long b;
        long c;
	long res;

        a = 1;
        b = 1;

        for (i = 0 ; i < 49 ; i++)
        {
                c = a + b;
		if (c % 2 == 0 && res < 4000000)
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
