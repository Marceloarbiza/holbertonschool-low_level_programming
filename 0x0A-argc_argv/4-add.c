#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
int main(int argc, char *argv[])
{
	int i, j;

	j = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (i = 0 ; i < argc ; i++)
		{
			if (*argv[i] < 123 && *argv[i] > 96)
			{
				printf("Error\n");
				break;
			}
			else
			{
				j += atoi(argv[i]);
			}
		}
		printf("%d\n", j);
	}
	return (0);
}
