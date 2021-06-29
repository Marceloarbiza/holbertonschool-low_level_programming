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
	int j;
	int k;
	int neg;
	char sig;
	char tot[999];
	char num[999];

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		if (*(s + i) == 45)
		{
			neg++;	
		}
	}
	if (neg % 2 == 0)
	{
		sig = "+";
	}
	else
	{
		sig = "-";
	}
	
	i = 0;
	j = 1;

	for (i = 0 ; *(s +´i) != '\0' ; i++)
	{
		if (*(s + i) > 47 && *(s + i) < 58)
		{
			num[j] = *(s + i);
			j++;		
		}
	}
	
	tot[0] = sig;
	for (k = 1 ; k <= j ; k++)
	{
		tot[k] = num[k - 1];
	}
	return (tot + '0');
}
