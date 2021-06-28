#include "holberton.h"
/**
 * _strlen - lenght
 * @s:char
 *
 */
int _strlen(char *s)
{
	int i;
	char t[] = *s;

	for (i = 0 ; t[i] != '\0' ; i++);

	return (i);
}
