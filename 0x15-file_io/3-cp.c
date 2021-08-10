#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int from, to, p = 1024;
	char buf[1024 + 1];
	
	if (argc == 0)
		return (-1);

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	while (p == 1024)
	{
		p = read(from, buf, 1024);
		write(to, buf, p);
	}

	return (to);
}
