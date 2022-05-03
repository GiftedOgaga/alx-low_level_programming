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
	while (n < 98)
	{
		if (n > 9)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		n += 1;
	}
	while (n > 98)
	{
		if (n > 10 && n < 100)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (n > 99)
		{
			_putchar(n / 100 + '0');
			_putchar((n % 100) / 10 + '0');
			_putchar(n % 10 + '0');
		}
		n -= 1;
	}

	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
