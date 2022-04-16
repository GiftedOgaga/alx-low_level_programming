#include "main.h"

/**
 * print_numbers - print integers 0 through 9 and a new line
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int Alpha;

	Alpha = 0;
	for (Alpha = 0; Alpha < 10; Alpha++)
	{
		_putchar(Alpha + '0');
		_putchar('\n');
	}
}
