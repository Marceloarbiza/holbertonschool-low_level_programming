#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * print_listint - list structs
  * @h: listint_t
  * Return: size_t
  */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = NULL;
	size_t num;

	node = h;
	num = 0;

	for (; node != NULL ; num++)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
	return (num);
}
