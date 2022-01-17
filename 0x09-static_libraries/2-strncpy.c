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
	int j;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	for (j = i ; j < n ; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
