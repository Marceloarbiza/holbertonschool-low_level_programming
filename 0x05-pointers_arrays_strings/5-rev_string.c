#include "holberton.h"
/**
 * rev_string - rev string
 * @s:character
 *
 */
void rev_string(char *s)
{
	char c[999];
	int i;
	int j;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		c[i] = *(s + i);
	}

	j = i;

	while (j)
	{
		j--;
		*(s + (i - j) - 1) = c[j];
	}
}
