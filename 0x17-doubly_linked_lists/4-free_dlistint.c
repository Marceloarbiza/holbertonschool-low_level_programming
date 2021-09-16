#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next)
	{	
		head = head->next;
		free(head);
	}
}
