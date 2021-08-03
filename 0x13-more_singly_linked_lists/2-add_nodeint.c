#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * add_nodeint - list structs
  * @head: listint_t
  * @n: const int
  * Return: size_t
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h = NULL;
	listint_t *new = NULL;

	h = *head;
	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
	}

	new->next = h;
	*head = new;

	return (new);
}
