#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 *@argc: int
 *@argv: char
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, j, k;

	j = 0;

	for (i = 0 ; i < argc ; i++)
	{
		{
			if (*argv[i] < 123 && *argv[i] > 96)
			{
				k = 1;
				break;
			}
			else
			{
				k = 0;
				j += atoi(argv[i]);
			}
		}
	}

	if (k == 1)
	{
		printf("Error\n");
	}
	else if (k == 0)
	{
		printf("%d\n", j);
	}

	return (0);
}
