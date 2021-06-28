#include "holberton.h"
/**
 * _puts - puts
 * @str:string
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; *(str + i) != '\0' ; i++)
	{	
		if (*(str + i) == '\0')
		{
			continue;
		}
		else
		{
		_putchar(*(str + i));
		}
	}
}
