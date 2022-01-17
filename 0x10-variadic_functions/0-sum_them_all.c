#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  * sum_them_all - sum them
  * @n: unsigned int
  *
  * Return: int
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int suma = 0;

	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
	{
		suma += va_arg(ap, int);
	}

	va_end(ap);
	return (suma);
}
