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

	list_t *node = NULL;
	size_t num;

	num = 0;
	node = malloc(sizeof(list_t));

	if (!num)
	{
		return (NULL);
	}
	else
	{
		node->str = strdup(str);
	}

	if (!node->str)
	{
		free(node);
		return (NULL);
	}
	else

	while (node->str[num])
		num++;

	node->len = num;
	node->next = *head;
	*head = node;

	return (*head);

}
