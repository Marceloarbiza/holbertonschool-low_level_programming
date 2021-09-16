#include "lists.h"

/**
 * add_dnodeint_end - Add end node
 * @head: head
 * @n: int
 * Return: struct
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL;
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));


	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = new;
	new->prev = tmp;
	new->next = NULL;
	return (new);
}
