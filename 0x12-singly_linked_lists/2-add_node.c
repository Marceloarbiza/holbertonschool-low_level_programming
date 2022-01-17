#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - add node
 * @str: const char
 * @head: list_t
 * Return: list_t.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t num;

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->str = strdup(str);
	}

	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	for (num = 0; node->str[num] != '\0'; num++)
	{
	}

	node->len = num;
	node->next = *head;
	*head = node;

	return (*head);
}
