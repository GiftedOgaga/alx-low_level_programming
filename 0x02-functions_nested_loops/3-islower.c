#include "main.h"

/**
 * _islower-check for lowercasw letter
 * @c: The character to be checked
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	char kp;

	if (kp >= 'a' && kp <= 'z')
	{
		_putchar('1');
		_putchar('\n');
	}
	else
	{
		_putchar('0');
		_putchar('\n');
	}
}
