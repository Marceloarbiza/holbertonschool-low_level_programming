#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - malloc
 * @b: unsigned int
 *
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *i = NULL;

	i = malloc(sizeof(b));

	return (i);
}
