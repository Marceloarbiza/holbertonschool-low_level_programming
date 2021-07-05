#include "holberton.h"
#include <stddef.h>
/**
 * *_strstr - str
 * @haystack: char
 * @needle: char
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{

	int posn, poshs;
	char *p = NULL;

	if (haystack && needle && needle[0] != '\0')
	{
		for (poshs = 0 ; haystack[poshs] != '\0' ; poshs++)
		{
			if (haystack[poshs] == needle[posn])
			{
				if(posn == 0)
				{
					p = haystack + poshs;
				}
				
				posn++;

				if (needle[posn] == '\0')
				{
					break;
				}
			}
			else
			{
				posn = 0;
				p = NULL;
			}
		}
	}
	return (p);
}
