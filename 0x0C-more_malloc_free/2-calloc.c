#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - calloc
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **p2 = NULL;
	void *p1 = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return NULL;
	
	p2 = malloc(size * nmemb);

	if (!p2)
		return NULL;

	for (i = 0 ; i < nmemb ; i++)
	{
		p1 = malloc(size * size);
		
		if (!p1)
			return NULL;
		p2[i] = p1;
	}

	return (p2);
}
