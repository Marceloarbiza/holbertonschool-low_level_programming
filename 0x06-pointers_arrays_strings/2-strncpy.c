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

	for (i = 0 ; *(dest + i) != '\0' ; i++);

	for (j = 0 ; j < n ; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
