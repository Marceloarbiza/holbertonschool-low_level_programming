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
	unsigned int i = 0;
	listint_t *tmp = NULL;

	tmp = head;

	while (tmp && i != index)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp && i == index)
		return (tmp);

	return (NULL);
}
