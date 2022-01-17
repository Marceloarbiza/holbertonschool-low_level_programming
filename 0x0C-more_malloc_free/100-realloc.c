#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _realloc - realloc
* @ptr: void
* @old_size : unsigned int
* @new_size : unsigned int
*
* Return: void
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int limit, i;
	void *add = NULL;
	char *oldChar, *newChar;

	if (new_size < old_size)
		limit = new_size;
	limit = old_size;

	add = malloc(new_size);

	if (!add)
		return (NULL);

	newChar = add;
	oldChar = ptr;

	for (i = 0 ; i < limit ; i++)
		newChar[i] = oldChar[i];

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	return (add);
}
