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
	double num;
	int numi;
	int sig;

	sig = 1;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		if (*(s + i) == '-')
		{
			sig *= -1;
		}
	}

	i = 0;
	num = 0.0;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			num *= 10;
			num += *(s + i) - '0';
		}
		else
		{
			break;
		}
	}

	num *= sig;
	numi = num;
	return (numi);
}
