#include "lists.h"
#include "5-get_dnodeint.c"
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
		return (NULL);
	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	while (tmp)
	{
		if (idx == count)
		{
			new->next = tmp;
			new->prev = tmp->prev;
			tmp->prev = new;
			new->prev->next = new;
			return (new);
		}
		tmp = tmp->next;
		count++;
	}

	if (count > idx)
	{
		return (NULL);
	}
	else if (count == idx)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
