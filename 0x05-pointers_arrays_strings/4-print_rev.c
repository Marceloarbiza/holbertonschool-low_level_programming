#include "holberton.h"
int _strlen(char *s)
{
        int i;

        for (i = 0 ; *(s + i) != '\0' ; i++)
        {
                continue;
        }

        return (i);
}
/**
 * print_rev - reverse
 * @s:character
 *
 */
void print_rev(char *s)
{
	int i;
	int j;

	j = _strlen(s);

	for (int i = j ; *(s + j) != '\0' ; j--)
	{
		_putchar(*(s + j));
	}
}
