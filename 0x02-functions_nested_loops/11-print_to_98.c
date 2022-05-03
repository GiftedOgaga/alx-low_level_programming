#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98-print natural numbers from n to 98
 *@n:where increment of decrement starts
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n += 1;
	}
	if (n > 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n -= 1;
	}
	_putchar(n + '0');
}
