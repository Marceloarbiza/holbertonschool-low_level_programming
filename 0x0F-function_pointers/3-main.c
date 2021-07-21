#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - main
  * @argc: int
  * @argv: char
  *
  * Return: int
  */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	int (*f)(int, int);

	f = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == '0')
	{
		printf("Erroe\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", f(num1, num2));

	return (0);

}
