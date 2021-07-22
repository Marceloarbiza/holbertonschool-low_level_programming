#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  * print_strings - print strings
  * @separator: const char
  * @n: const unsigned int
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i;

	char *s;

	va_start(op, n);

	for (i = 0 ; i < n ; i++)
	{
		s = va_arg(op, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if ((i < (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(op);
}
