#include "holberton.h"
/**
 * *string_toupper - upper
 * @*: char
 *
 * Return: char
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0 ; *(c + i) != '\0' ; i++)
	{
		if ((*(c + i) > 96) && (*(c + i) < 123))
		{
			*(c + i) = *(c + i) - 32;
		}
	}
	return (c);
}
