#include "main.h"

/**
 * print_line - print a straight line in the terminal
 * @n: out of function
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int k;

	k = 0;
	if (n > 0)
	{
		while (k < n)
		{
			_putchar('_');
			k += 1;
	}
	_putchar('\n');
}
