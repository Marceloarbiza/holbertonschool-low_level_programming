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
	int sig;
	int retint;
	int tot[999];
	int num[999];

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		if (*(s + i) == 45)
		{
			neg++;	
		}
	}
	if (neg % 2 == 0)
	{
		sig = 43;
	}
	else
	{
		sig = 45;
	}
	
	i = 0;
	j = 1;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		if (*(s + i) > 47 && *(s + i) < 58)
		{
			num[j] = *(s + i);
			j++;		
		}
	}
	
	for (k = 0 ; k < j ; k++)
	{
		tot[k] = num[k];
	}

	k = 0;

	for (k = 0 ; k < j ; k++)
	{
		retint = retint + tot[k] * 100; 
	}
	retint * sig;
	return (retint);
}
