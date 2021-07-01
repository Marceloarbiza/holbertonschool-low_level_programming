#include "holberton.h"
/**
 * *_strncpy - str copy
 * @dest: char
 * @src: char
 * @n: char
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; *(src + i) != '\0' && i < n ; i++)
	{
			*(dest + i) = *(src + i);
	}
	for ( ; i < n ; i++)
	{
			*(dest + i) = '\0';
	}

	return (dest);
}
