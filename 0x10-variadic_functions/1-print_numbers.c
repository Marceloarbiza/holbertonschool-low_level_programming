#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_numbers - print numbers
  * @separator: const char
  * @n: const unsigned int
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, j;

	va_start(nums, n);

	j = n - 1;

	for (i = 0 ; i < n ; i++)
	{
		if (i < j)
		{
			printf("%d", va_arg(nums, int));
			if (separator)
			{
				printf("%s", separator);
			}
		}
		else
		{
		printf("%d\n", va_arg(nums, int));
		}
	}

}
