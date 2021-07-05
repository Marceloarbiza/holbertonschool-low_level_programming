#include "holberton.h"
/**
 * *_strchr - strchr
 * @s: char
 * @c: char
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;

	if (!s)
	{
		return ('\0');
	}

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	if (s[i] == c)
	{
		return (s + i);
	}

	return ('\0');
}
