#include "lists.h"

/**
 * free_dlistint - check the code
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(tmp);
}
