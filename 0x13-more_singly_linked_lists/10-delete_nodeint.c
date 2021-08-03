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
	listint_t *h = NULL, *tmp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	h = *head;

	if (head)
	{
		if (index == 0)
		{
			*head = h->next;
			free(h);
			return (1);
		}
		else
		{
			while (i < index - 1)
			{
				h = h->next;
				i++;
			}

			tmp = h->next;
			h->next = (h->next)->next;
			free(tmp);
			return (1);
		}
	}
	else
	{
		return (-1);
	}
}
