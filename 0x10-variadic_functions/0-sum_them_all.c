#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  *
  *
  *
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int suma = 0;
	
	if (n == 0)
	{
		return (0);
	}
	else
	{
	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
	{
		suma += va_arg(ap, int);
	}

	va_end(ap);
	}
	return (suma);
}
