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

	for (i = j ; *(s + i) != '\0' ; i--)
	{
		_putchar(*(s + i));
	}
}
