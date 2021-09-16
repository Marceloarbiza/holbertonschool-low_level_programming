#include "lists.h"

/**
 * get_dnodeint_at_index - return index node
 * @head: head
 * @index: index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	while (head)
	{
		head = head->next;
		count++;
		if (count == index)
		{
			return (head);
		}
	}
	return (NULL);
}
