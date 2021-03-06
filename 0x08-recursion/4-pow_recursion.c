#include "holberton.h"
/**
 * _pow_recursion - recursion
 * @x: int
 * @y: int
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}

	x = x * _pow_recursion(x, y - 1);
	return (x);
}
