#include <stdio.h>
/**
 * main - print num
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
