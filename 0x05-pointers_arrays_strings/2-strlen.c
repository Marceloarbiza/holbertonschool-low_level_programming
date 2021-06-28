#include "holberton.h"
/**
 * _strlen - lenght
 * @s:char
 *
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; *(s + i) != '\0' ; i++);
		continue;
	return (i);
}
