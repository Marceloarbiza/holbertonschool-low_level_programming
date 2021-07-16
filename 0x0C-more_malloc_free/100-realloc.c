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
	void *add = NULL;

	if (new_size < old_size)
	{
		add = malloc(new_size);
		
		if (!add)
		{
			return (NULL);
		}
		else
		{
			add = ptr;
		}
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	return (add);
}
