#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - check the code
 * @head: head
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = NULL;
	int sum = 0;

	if (head)
	{
		while (head->next)
		{
			tmp = head->next;
			sum += head->n;
			head = tmp;
		}
		sum += head->n;
	}
	return (sum);
}
