#include <stdio.h>
/**
 * main - main
 * @argc: int
 * @argv: char
 *
 *Return: int
 */
int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		i = *argv[1] - 48;
		j = *argv[2] - 48;

		k = i * j;

		printf("%d\n", k);
	}

	return (0);
}
