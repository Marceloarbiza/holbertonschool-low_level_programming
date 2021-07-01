#include "holberton.h"
/**
 * *cap_string - capitalize
 * @c:char
 *
 * Return: char
 */
char *cap_string(char *c)
{
	int i, j;

	for (i = 0 ; c[i] != '\0' ; i++)
	{
		if (c[i - 1] == ' ' || c[i - 1] == '\t' ||
		c[i - 1] == '\n' || c[i - 1] == ',' ||
		c[i - 1] == ';' || c[i - 1] == '.' ||
		c[i - 1] == '!' || c[i - 1] == '?' ||
		c[i - 1] == '"' || c[i - 1] == '(' ||
		c[i - 1] == ')' || c[i - 1] == '{' ||
		c[i - 1] == '}' || c == 0)
		{
			j = 1;
		}
		if (j == 1 && c[i] > 96 && c[i] < 123)
		{
			c[i] = c[i] - 32;
		}
		j = 0;
	}
	return (c);
}
