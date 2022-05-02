#include "main.h"

/**
 * _sqrt_recursion-function returns the natural square-root of a number
 * @n:given number
 * Return: -1 if n doesnot have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

/**
 * sqrt2-makes posible to evaluate sqrt_recursion
 * @a: same as n
 * @b: iterative value
 * Return: value on successs and -1 when not successful
 */
int sqrt2(int a, int b)
{
	if (a == b * b)
	{
		return (b);
	}
	if (a < 0)
	{
		return (-1);
	}
	if (b > a)
	{
		return (-1);
	}
	else
	{
		return (sqrt2(a, b + 1));
	}
}
