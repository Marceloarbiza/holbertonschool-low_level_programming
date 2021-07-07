#include "holberton.h"
/**
 * _sqrt_recursion - recurion
 * @n: int
 *
 * Return: int
 */
int comp( int n , int j)
{
	if (j * j == n)
	{
		return (j);
	}
	else if (j * j > n)
	{
		return (-1);
	}
	return (comp(n , j + 1));
}

int _sqrt_recursion(int n)
{
	return (comp(n , 1));
}
