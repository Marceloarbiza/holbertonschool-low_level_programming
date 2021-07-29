#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* list_len - length of the list
* @h: const list_t
*
* Return: size_t
*/
size_t list_len(const list_t *h)
{
	const list_t *tmp = NULL;
	size_t num;

	tmp = h;
	num = 0;

	while (tmp != NULL)
	{
		num++;
		tmp = tmp->next;
	}
	return (num);
}
