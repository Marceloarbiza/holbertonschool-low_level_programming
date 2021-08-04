#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverse listint
 * @head: head
 * Return: listint
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *tmp = NULL;

	if (!(*head))
		return (NULL);

	prev = *head;

	tmp = prev->next;
	*head = prev->next;

	prev->next = NULL;

	while (*head)
	{
		(*head) = (*head)->next;
		tmp->next = prev;
		prev = tmp;
		tmp = *head;
	}

	*head = prev;
	return (*head);
}

