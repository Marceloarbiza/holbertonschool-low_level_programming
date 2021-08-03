#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code
 * @head: head
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int num = 0;

	tmp = *head;

	if (head)
	{
		if ((*head)->next)
		{
			num = tmp->n;
			tmp = tmp->next;
			(*head)->next = NULL;
			*head = tmp;
		}
	}
	return (num);
}
