#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _strdup - strup
 * @str: char
 *
 * Return: char
 */
char *_strdup(char *str)
{
	int i = 0;
	int len;
	char *p = NULL;

	if (str)
	{
	for (len = 0 ; *(str + len) != '\0' ; len++)
		;

		p = malloc(sizeof(char) * len + 1);

		if (p)
		{
		for (i = 0 ; i < len ; i++)
		{
			*(p + i) = *(str + i);
		}
		*(p + len) = '\0';
		}
	}
	return (p);
}
