#include "main.h"

/**
 * print_most_numbers - print most numbers
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int Alpha;

	for (Alpha = 0; Alpha < 10; Alpha++)
	{
		if (Alpha == 2 || Alpha == 4)
		{
			continue;
		}
		_putchar(Alpha + '0');
	}
	_putchar('\n');
}
