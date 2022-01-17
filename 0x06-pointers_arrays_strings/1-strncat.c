#include "holberton.h"
/**
 * *_strncat - str cat
 * @dest: char
 * @src: char
 * @n: char
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	char **p;

	p = &dest;

	for (i = 0 ; *(dest + i) != '\0' ; i++)
		;

	for (j = 0 ; *(src + j) != '\0' ; j++)
	{
	}

	if (j <= n)
	{
		n = j;
	}

	for (j = 0 ; j < n ; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}

	dest[i + j] = '\0';
	return (*p);
}
