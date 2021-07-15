#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - malloc
 * @b: unsigned int
 *
 * Return: i
 */
void *malloc_checked(unsigned int b)
{
	void *i = NULL;

	i = malloc(b);

	if (!i)
	{
		exit(98);
	}
	return (i);
}
