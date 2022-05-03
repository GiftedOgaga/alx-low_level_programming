#include "main.h"

/**
 * is_prime_number-detect prime numbers
 * @n:given number
 * Return: 1 if its prime otherwise -1
 */

int is_prime_number(int n)
{
	return(prime(n, 1, 1));
}

/**
 * prime- helps to evaluate function prime_numbers
 * @a: same as n
 * @b: iterative value
 * Return: 1 if its prime otherwise -1
 */

int prime(int a, int b, int c)
{
	if (a <= 1)
	{
		return (0);
	}
	if (a % b == 0) && (b < a)
	{
		return (prime(a, b + 1, c + 1));
	}
}
