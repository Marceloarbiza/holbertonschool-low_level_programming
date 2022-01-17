#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - check the code
 * @head: head
 * @idx: idx
 * @n: n
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *h = NULL, *tmp = NULL;
	unsigned int i = 1;

	h = *head;
	new = malloc(sizeof(listint_t));
	
	if (!new)
		return (NULL);
	else
		new->n = n;
	
	if (idx == 0)
	{
		new->next = h;
		*head = new;
	}
	if (*head)
	{
		while (h->next && i < idx)
		{
			h = h->next;
			i++;
		}
		
		if (h->next)
		{
			tmp = h->next;
			h->next = new;
			new->next = tmp;
		}
		else
		{
			h->next = new;
			new->next = NULL;
		}
	
	}
	return (new);
}
