#include "main.h"

/**
 * print_numbers - print integers 0 through 9 and a new line
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int Alpha = '1';

	Alpha = 0;
	while (Alpha < 10)
	{
		_putchar(Alpha + '0');
		Alpha += 1;
	}
	_putchar('\n');
}
