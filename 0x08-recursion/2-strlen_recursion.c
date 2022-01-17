#include "holberton.h"
/**
 * _strlen_recursion - recursion
 * @s: char
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int n;

	n = 0;

	if (*s == '\0')
	{
		return (n);
	}
	else
	{
		n = 1 +	_strlen_recursion(++s);
	}
	return (n);
}
