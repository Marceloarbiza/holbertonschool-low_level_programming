#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_nodeint_end - add node int end
* @head: listint_t
* @n: int
* Return: listint_t
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h = NULL;
	listint_t *new = NULL;

	h = *head;
	new = malloc(sizeof(listint_t));

	if (new)
	{
		new->n = n;
		new->next = NULL;
		if (*head)
		{
			h = *head;

			while (h->next)
				h = h->next;

			h->next = new;
		}
		else
		{
			*head = new;
		}
	}

	return (new);
}
