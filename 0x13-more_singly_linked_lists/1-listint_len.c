#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * listint_len - list structs
  * @h: listint_t
  * Return: size_t
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *node = NULL;
	size_t num;

	node = h;
	num = 0;

	for (; node != NULL ; num++)
		node = node->next;

	return (num);
}
