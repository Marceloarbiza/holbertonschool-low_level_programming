#include "holberton.h"
/**
 * _isalpha - lower
 * @c:character
 *
 * Return: zero
 */
int _isalpha(int c)
{
	int i;

	if ((c < 123 && c > 96) || (c < 91 && c > 64))
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
