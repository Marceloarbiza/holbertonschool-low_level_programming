#include <stdio.h>
/**
 * main - alpha c
 *
 * Return: zero
 */
int main(void)
	{
	char c, a, line;
	line = '\n';

		for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar (line);
	return (0);
}
