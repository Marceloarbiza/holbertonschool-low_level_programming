#include "holberton.h"
/**
 * int _strspn - strpn
 * @a: char
 * @accept: char
 *
 * Return: unsigned
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	j = 0;
	k = 0;

	for (i = 0 ; s[i] != ',' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
			}
		}
	}
	return (k);
}
