#include "lists.h"

/**
 * get_dnodeint_at_index - return index node
 * @head: head
 * @index: index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	while (tmp)
	{
		if (count == index)
		{
			return (tmp);
		}
		count++;
		tmp = tmp->next;
	}
	return (NULL);
}
