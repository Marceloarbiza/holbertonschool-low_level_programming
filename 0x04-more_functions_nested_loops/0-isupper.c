#include "holberton.h"
/**
 * _isupper - uppercase
 *
 * Return: int
 */
int _isupper(int c)
{
	if (c >= 63 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}