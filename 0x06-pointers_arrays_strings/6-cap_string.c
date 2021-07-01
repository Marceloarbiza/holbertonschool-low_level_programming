#include "holberton.h"
/**
 * *cap_string - capitalize
 * @c:char
 *
 * Return: char
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0 ; c[i] != '\0' ; i++)
	{
		if ((c[i] == ' ' || c[i] == '\n' || c[i] == 44 || c[i] == 59 || c[i] == 46 || c[i] == 33 || c[i] == 63 || c[i] == 34 || c[i] == 40 || c[i] == 41 || c[i] == 123 || c[i] == 125) && (c[i + 1] > 96 && c[i + 1] < 123))
		{
			c[i + 1] = c[i + 1] - 32;
		}
		else if (c[i] == '\t')
		{
			c[i] = ' ';
			c[i + 1] = c[i + 1] - 32;
		}
	}
	return(c);
}
