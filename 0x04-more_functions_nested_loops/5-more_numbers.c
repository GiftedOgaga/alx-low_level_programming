#include "main.h"

/**
 * more_numbers - functions that print 10 times numbers from 0 to 14
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int Alpha;
	int k;

	k = 0;
	while (k < 10)
	{
		for (Alpha = 0; Alpha < 10; Alpha++)
		{
			_putchar(Alpha + '0');
		}
		if (Alpha > 9)
		{
			_putchar((Alpha / 10) + '0');
			_putchar((Alpha % 10) + '0');
		}
		_putchar('\n');
		k += 1;
	}
}
