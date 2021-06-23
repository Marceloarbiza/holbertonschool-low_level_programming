#include <stdio.h>
/**
 * main - fibonacci
 *
 * Return: int
 */
int main(void)
{
        long a;
        long b;
        long f;
	long res;

        a = 1;
        b = 1;

        while(f < 4000000)
	{
		f = a + b;
		if ((f % 2) == 0)
		{
			res = res + f;
		}
		
		a = b;
		b = f;
	}
        printf("%ld\n", res);
        return (0);
}
