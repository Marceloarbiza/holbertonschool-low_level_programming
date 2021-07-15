#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concat
 * @s1: char
 * @s2: char
 * @n: unsigned int
 *
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	unsigned int lenS1 = 0, lenS2 = 0, lenTot = 0, lenS3 = 0, lenS4 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (s1)
		for (lenS1 = 0 ; *(s1 + lenS1) != '\0' ; lenS1++)
			;

	if (s2)
		for (lenS2 = 0 ; *(s2 + lenS2) != '\0' ; lenS2++)
			;

	if (n >= lenS2)
		n = lenS2;

	lenTot = lenS1 + n;

	p = malloc(sizeof(char) * (lenTot + 1));

	if (p == NULL)
		return (NULL);

	for (lenS3 = 0 ; lenS3 < lenS1 ; lenS3++)
		p[lenS3] = s1[lenS3];

	lenS3 = 0;

	for (lenS4 = lenS1 ; lenS4 < lenTot ; lenS4++)
	{
		p[lenS4] = s2[lenS3];
		lenS3++;
	}
	p[lenTot] = '\0';

	return (p);
}
