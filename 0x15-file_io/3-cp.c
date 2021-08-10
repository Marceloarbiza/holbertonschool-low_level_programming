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
	int from, to, wr, clf, clt, p = 1024;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	if (argv[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);

	if (to == -1)
		to = open(argv[2], O_TRUNC | O_WRONLY);

	while (p == 1024)
	{
		p = read(from, buf, 1024);
		if (p == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		wr = write(to, buf, p);
		if (wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	clf = close(from);
	clt = close(to);
	if (clf == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);

	if (clt == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);

	return (0);
}
