#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free list
 * @head: list_t
 */
void free_list(list_t *head)
{
	if (head)
	{
		free(head->str);
	}
	free(head);
}
