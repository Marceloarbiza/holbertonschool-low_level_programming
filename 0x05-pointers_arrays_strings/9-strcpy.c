#include "holberton.h"
/**
 * *_strcpy - string copy
 * @dest:char
 * @src:char
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;
	char strchar[999];

	for (i = 0 ; *(src + i) != '\0' ; i++)
	{
		strchar[i] = *(src + i);
	}
	return (strchar[]);
}
