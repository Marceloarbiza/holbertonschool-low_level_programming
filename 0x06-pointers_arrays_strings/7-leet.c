#include "holberton.h"
/**
 * *leet - leet
 * @c: char
 *
 * Return: char
 */
char *leet(char *c)
{
	int i;
	int j;
	char letras[] = "aAeEoOtTlL";
	char numeros[] = "4433007711";

	for (i = 0 ; *(c + i) != '\0' ; i++)
	{
		for (j = 0 ; letras[j] != '\0' ; j++)
		{
			if (*(c + i) == letras[j])
			{
			*(c + i) = numeros[j];
			}
		}
	}
	return (c);
}
