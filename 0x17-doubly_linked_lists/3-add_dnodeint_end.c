#include "lists.h"

/**
 * add_dnodeint_end - Add end node
 * @head: head
 * @n: int
 * Return: struct
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
	}

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = NULL;
		if (*head)
		{
			new->prev = tmp;
		}
			new->prev = NULL;
	}
	return (new);
}
