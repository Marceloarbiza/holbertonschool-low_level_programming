#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
  * print_name - print name
  * @name: char
  * @f: char
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
