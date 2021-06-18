#include <stdio.h>
/**
 * main - alpha
 *
 * Return: zero
 */
int main(void)
{
	char c, line;

	line = '\n';
	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar (c);
	}
	putchar (line);
	return (0);
}
