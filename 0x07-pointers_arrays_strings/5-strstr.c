#include "holberton.h"
/**
 * *_strstr - str
 * @haystack: char
 * @needle: char
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, h;

	j = 0;
	h = 0;

	for (k = 0; needle[k] != '\0' ; k++)
		;

	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		if (haystack[i] == needle[j])
		{
			h++;
			j++;
		}
	}

	if (j == k)
	{
		return (needle);
	}

	return ('\0');
}
