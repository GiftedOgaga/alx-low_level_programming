#include "main.h"

/**
 * puts2-function that prints every other character of a string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i, x;

	i = 0;
	x = 0;

	while (str[i++])
	{
		x++;
	}
	for (i = 0; i < x; i += 2)
	{
		_putchar('\n');
	}
}
