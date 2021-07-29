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
	list_t *h;

	if (head)
	{
		h = head->next;
		free(head->str);
		free(head);
		head = h;
	}
	free(head->str);
	free(head);
}
