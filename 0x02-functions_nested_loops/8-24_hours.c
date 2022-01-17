#include "holberton.h"
/**
 * jack_bauer - time
 *
 */
void jack_bauer(void)
{
	int h = 0;
	int i = 0;

	while (h < 24)
	{
		while (i < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
			i++;
		}
		i = 0;
		h++;
	}
}
