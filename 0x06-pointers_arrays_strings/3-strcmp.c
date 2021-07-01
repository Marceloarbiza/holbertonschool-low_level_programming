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

	for (i = 0 ; *(s1 + i) != '\0' && *(s2 + i) != '\0' ; i++)
	{
		if (*(s1 + i) > *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
		}
		else if (*(s2 + i) > *(s1 + i))
		{
			return ((*(s2 + i) - *(s1 + i)) * -1);
		}
	}
	return (0);
}
