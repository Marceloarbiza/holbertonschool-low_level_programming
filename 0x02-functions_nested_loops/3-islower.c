#include "holberton.h"
/**
 * _islower - lower
 * @c:character
 *
 * Return: zero
 */
int _islower(int c)
{
	int i;

	if (c < 123 && c > 96)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
