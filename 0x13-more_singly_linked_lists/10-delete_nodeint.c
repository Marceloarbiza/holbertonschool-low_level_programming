#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - check the code
 * @head: list
 * @index: unsig
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = NULL;
	unsigned int i = 0;

	h = *head;

	if (head)
	{
		if (i == 0)
		{
			*head = (*head)->next;
			free(h);
			return (1);
		}
		else
		{
			while (i != index)
			{
				h = h->next;
				i++;
			}
			free(h->next);
			h->next = (h->next)->next;
			return (1);
		}
	}
	else
	{
		return (-1);
	}
}
