#include "lists.h"
/**
 * dlistint_len - count elements
 * @h: head list
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
