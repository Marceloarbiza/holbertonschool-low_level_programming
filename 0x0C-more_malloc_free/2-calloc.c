#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - calloc
 *
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: p2
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p2 = NULL;
	unsigned int i;
	char *f;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p2 = malloc(size * nmemb);

	if (!p2)
		return (NULL);

	f = (char *)p2;

	for (i = 0 ; i < (nmemb * size) ; i++)
		f[i] = 0;
	return (f);

	return (NULL);
}
