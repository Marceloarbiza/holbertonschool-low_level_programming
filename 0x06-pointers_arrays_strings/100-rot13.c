#include "holberton.h"
/**
 * *rot13 - rot
 * @c:char
 *
 * Return: char
 */
char *rot13(char *c)
{
	int i;
	int j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; c[i] != '\0' ; i++)
	{
		for (j = 0 ; s1[j] != '\0' ; j++)
		{
			if (c[i] == s1[j])
			{
				c[i] = s2[j];
			}

		}
	}
	return (c);
}
