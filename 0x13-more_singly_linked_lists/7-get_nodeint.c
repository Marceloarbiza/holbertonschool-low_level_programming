#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 * @head: head
 * @index: index
 * Return: listint_t.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = NULL;
	unsigned int i = 0;

	tmp = head;

	if (!head)
		return (NULL);

	if (head)
	{
		while (tmp && (i != (index - 1)))
		{
			tmp = tmp->next;
			i++;
		}

		if (tmp && (i == (index - 1)))
			return (tmp);
	}
	return (head);
}
