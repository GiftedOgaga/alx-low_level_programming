#include "main.h"

/**
 * factorial-function returns the factorial of a number
 * @n:given number
 * Return: -1 if n < 0 otherwise return factotia of n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
