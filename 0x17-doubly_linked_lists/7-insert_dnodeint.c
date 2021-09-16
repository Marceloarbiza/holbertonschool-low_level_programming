#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: head
 * @idx: u int
 * @n: int
 * Return: node adress
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	dlistint_t *tmp = *h;
	unsigned int count = 0;

	if (!new)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}

	if (count > idx)
	{
		return (NULL);
	}
	else if (count == idx)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	else
	{

	}
	return (new);
}
