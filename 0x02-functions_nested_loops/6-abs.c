#include "holberton.h"
/**
 * _abs - adsolute number
 * c:int
 *
 * Return: int
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	return (c);
}
