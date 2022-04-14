#include "main.h"

/**
 * _islower-check for lowercasw letter
 * @c: The character to be checked
 *
 * Return: 1 if character is lower case otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
		_putchar('\n');
	}
	else
	{
		return (0);
		_putchar('\n');
	}
}
