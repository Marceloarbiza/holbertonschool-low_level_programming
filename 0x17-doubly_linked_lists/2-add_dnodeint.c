#include "lists.h"
/**
 * add_dnodeint - add node beginning
 * @head: head
 * @n: int
 * Return: struct
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	 dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		if (*head)
		{
			(*head)->prev = new;
		}
			*head = new;
	}
	return (new);
}
