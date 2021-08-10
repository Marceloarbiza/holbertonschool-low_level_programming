#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char *argv[])
{
	int from, to, p = 1024;
	char buf[1024 + 1];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO,"Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}

	from = open(argv[1], O_RDONLY);

	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (p == 1024)
	{
		p = read(from, buf, 1024);
		write(to, buf, p);
	}

	close(from);
	return (to);
}
