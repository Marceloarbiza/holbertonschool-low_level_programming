#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
  * print_list - print list
  * @h: const list_t
  *
  * Return: size_t
  */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	size_t num;

	tmp = h;
	num = 0;

	while (tmp != NULL)
	{
		if (tmp->str != NULL)
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		tmp = tmp->next;
		num++;
	}
	return (num);
}
