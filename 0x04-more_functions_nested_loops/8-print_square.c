#include "main.h"
/**
 * print_square - print a square with #
 * @size: limit
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int i;
	int k;

	k = 0;
	if (size > 0)
	{
		while (k < size)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			k += 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
