#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* insert_nodeint_at_index - add node index
* @head: listint_t
* @n: int
* @idx: int
* Return: listint_t
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h = NULL, *new = NULL, *tmp = NULL;
	unsigned int i = 0;

	h = *head;
	new = malloc(sizeof(listint_t));

	if (new)
	{
		new->n = n;
		new->next = NULL;
		if (*head)
		{
			h = *head;

			while (h->next && i < (idx - 1))
			{
				h = h->next;
				i++;
			}

			tmp = h->next;
			new->next = tmp;

			while (tmp->next)
				tmp = tmp->next;

			h->next = new;
		}
		else
		{
			*head = new;
		}
	}
	else
	{
		return (NULL);
	}
	return (new);
}
