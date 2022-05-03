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
		printf("%d, ", n);
		n += 1;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n -= 1;
	}
	printf("98");
	_putchar('\n');
}
