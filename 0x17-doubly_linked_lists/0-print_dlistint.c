#include "lists.h"
#include <stdlib.h>
/**
  * print_dlistint - print double linked list
  * @h: head list
  * Return: size_t
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
