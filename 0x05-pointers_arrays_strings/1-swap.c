#include "holberton.h"
/**
 * swap_int - swap int
 * @a: int
 * @b: int
 *
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *b;
	*b = *a;
	*a = t;
}
