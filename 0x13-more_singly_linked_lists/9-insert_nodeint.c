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
	listint_t *tmp = NULL, *new = NULL, *h = NULL;
	unsigned int i = 0;

	h = *head;
	tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
	}

	if (head)
	{
		while ((*head)->next && i < (idx - 1))
		{
			tmp = (*head)->next;
			(*head) = tmp;
			i++;
		}

		if ((*head))
		{
			tmp = (*head)->next;
			(*head)->next = new;
			new->next = tmp;
		}
		else
		{
			return (NULL);
		}

		(*head) = h;
	}

	return (new);
}
