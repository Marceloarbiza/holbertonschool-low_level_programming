#include "holberton.h"
/**
 * *_strcat - concat string
 * @dest:char
 * @src:char
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0 ; *(dest + i) != '\0' ; i++);

	i += 1;
	for (j = 0 ; *(src + j) != '\0' ; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	Return(dest);
}
