#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - check the code
 * @filename: char
 * @text_content: char
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int op, wr;

	if (!filename)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND, 0600);
	if (op == -1)
		return (-1);

	if (text_content)
	{
		for (; text_content[i] ; i++)
			;

		wr = write(op, text_content, i);
	}
	close(op);

	if (wr != i)
		return (-1);

	return (1);
}
