#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - create array
 * @size: unsigned int
 * @c: char
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = NULL;

	if (size > 0)
	{
	p = malloc(sizeof(char) * size);

	if (!p)
	{
		return (NULL);
	}

	if (p)
	{
		for (i = 0; i < size ; i++)
		{
			p[i] = c;
		}
	}
	}
	return (p);
}
