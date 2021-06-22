#include "holberton.h"
/**
 * main - alphabet x ten
 *
 * Return: alphabet x ten
 *
 * alphabet
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
