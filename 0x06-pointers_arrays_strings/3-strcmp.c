#include "holberton.h"
/**
 * _strcmp - compare
 * @s1: char
 * @s2: char
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	j = 0;

	for (i = 0 ; *(s1 + i) != '\0' ; i++)
	{
		if (*(s1 + i) != *(s2 + j))
		{
			return (*(s1 + i) - *(s2 + j));
			break;
		}
		else if (*(s1 + i) == *(s2 + j))
		{
			return (0);
			j++;
		}
	}
	return (0);
}
