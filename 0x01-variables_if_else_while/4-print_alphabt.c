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
		if (c == 'e')
		{
			continue;
		}
		else if (c == 'q')
		{
			continue;
		}
		else
		{
			putchar (c);
		}

	}
	putchar (line);
	return (0);
}
