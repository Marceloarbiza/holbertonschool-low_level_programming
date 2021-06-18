#include <stdio.h>
/**
 * main - print number
 *
 * Return: zero
 */
int main(void)
{
	int i = 0;
		for (i = 0; i <= 9; i++)
		{
			putchar(i + '0');
		}
	putchar ('\n');
	return (0);
}
