#include "main.h"
/**
 * _isalpha-checks for alphabetic character
 *@c: character to check for
 *
 * Return: 1 if the character is an alphabet otherwise 0
 */

int _isalpha(int c)
{
	for ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
