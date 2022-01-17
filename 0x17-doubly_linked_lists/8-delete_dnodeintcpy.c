#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node index
 * @head: head
 * @index: index to delete
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int count = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		tmp->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp->next)
	{
		if (index == count)
		{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		count++;
		tmp = tmp->next;
	}
	return (-1);
}
