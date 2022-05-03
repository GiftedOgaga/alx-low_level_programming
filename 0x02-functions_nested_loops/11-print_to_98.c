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
	int num;

	for (num = n; num <= 98; num++)
	{
		while (num != 98)
		{
			_putchar(num);
			_putchar(',');
			_putchar(' ');
		}
	}
	for (num = n; num >= 98; num--)
	{
		while (num != 98)
		{
			_putchar(num);
			_putchar(',');
			_putchar(' ');
		}
	}
}
