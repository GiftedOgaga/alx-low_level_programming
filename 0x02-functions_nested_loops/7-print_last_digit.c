#include "main.h"

/**
 * print_last_digit-prints the last digit
 * @n:input of function
 * Return: Always n % 10  (Success)
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		return (-1 * (n % 10));
	}
	else
	{
		return (n % 10);
	}
}
