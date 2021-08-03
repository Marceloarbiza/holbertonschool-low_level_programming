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
	listint_t *h = NULL, *new = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	h = *head;

	while (h && (i < (idx - 1)))
	{
		h = h->next;
		i++;
	}

	new->next = h->next;
	h->next = new;
	return (new);

	free(new);
	return (NULL);
}
