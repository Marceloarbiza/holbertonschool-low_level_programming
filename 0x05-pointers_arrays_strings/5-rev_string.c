#include "holberton.h"
/**
 * rev_string - rev string
 * @s:character
 *
 */
void rev_string(char *s)
{
	char c[999];
	int i;
	int j;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		c[i] = *(s + i);
	}
	
	for (j = i ; j >= 0 ; j--)
	{
		*(s + (i - j)) = c[j]; 
	}
}
