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
	listint_t *header = NULL, *nexus = NULL;
	int num = 0;

	if (head)
	{
		header = *head;
		nexus = (*head)->next;
		num = header->n;
		
		if (nexus)
		{
			header->next = NULL;
			free(*head);
			*head = nexus;
			
		}
		else
		{
			free(*head);
			*head = NULL;
		}
	}
	return (num);
}
