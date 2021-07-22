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
	unsigned int i;

	va_start(nums, n);

	for (i = 0 ; i < n ; i++)
	{
		if (i < n - 1)
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
