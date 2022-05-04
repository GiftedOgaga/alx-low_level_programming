#include "main.h"

/**
 * jack_bauer-prints Every minutes in a day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if ((i < 10) && (j < 10))
			{
				_putchar('0');
				_putchar(i + '0');
				_putchar(':');
				_putchar('0');
				_putchar(j + '0');
				_putchar('\n');
			}
			if ((i > 9) && (j > 9))
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(':');
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
				_putchar('\n');
			}
		}
	}
}
