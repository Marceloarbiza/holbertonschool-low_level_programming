#include "holberton.h"
/**
 * _atoi - infinite
 * @s:char
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i;
	int neg;
	int sig;

	sig = 1;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		if (*(s + i) == 45)
		{
			neg++;	
		}
	}
	if (neg % 2 == 0)
	{
		sig *= 1;
	}
	else
	{
		sig *= -1;
	}
	return (sig);
}
