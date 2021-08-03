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

	if (head)
	{
		while (head->next && i < index)
		{
			tmp = head->next;
			head = tmp;
			i++;
		}

	}
	return (head);
}
