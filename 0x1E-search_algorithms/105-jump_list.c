#include "search_algos.h"
#include <math.h>

/**
 * jump_list - jump search algorithm linked list
 * @list: list to search
 * @size: size of the array
 * @value: value to find
 * Return: listint_t, NULL if not find
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tmp = list, *anterior;
	double sqrt_;
	int sqrt_int;
	int repeat;

	sqrt_ = sqrt(size);
	sqrt_int = (int)sqrt_;

	if (!list)
		return (NULL);

	while (tmp->next)
	{
		anterior = tmp;
		repeat = 0;
		while (repeat < sqrt_int && tmp->next)
		{
			tmp = tmp->next;
			repeat++;
		}
		printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
		if (value < tmp->n)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
				anterior->index, tmp->index);
			break;
		}
	}
	while (anterior && anterior->index < size)
	{
		printf("Value checked at index [%ld] = [%d]\n",
			anterior->index, anterior->n);
		if (anterior->n == value)
			return (anterior);
		anterior = anterior->next;
	}
	return (NULL);
}
