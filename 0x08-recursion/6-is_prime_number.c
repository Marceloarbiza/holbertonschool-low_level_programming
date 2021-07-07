#include "holberton.h"
/**
 * comp - recurion
 * @n: int
 * @j: int
 *
 * Return: int
 */
int comp(int n, int j)
{
	if (j * j == n)
	{
		return (j);
	}
	else if (j * j > n)
	{
		return (-1);
	}
	return (comp(n, j + 1));
}

#include "holberton.h"
/**
* _sqrt_recursion - recurion
* @n: int
*
* Return: int
*/
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else if (comp(n, 1) < 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
