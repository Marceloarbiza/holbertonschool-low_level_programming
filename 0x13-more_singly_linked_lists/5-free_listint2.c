#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* free_listint2 - free list int
* @head: listint_t
*/
void free_listint2(listint_t **head)
{
	listint_t *h = NULL;

	if (head)
	{
		while (*head)
		{
			h = (*head)->next;
			free(*head);
			(*head) = h;
		}
		free(*head);
	}

	*head = NULL;
}
