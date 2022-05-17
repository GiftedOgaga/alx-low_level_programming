#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * sum_them_all-function that returns sum of all its parameters
 * @n:numbers of parameters
 * Return:sum fonparameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list argstosum;
	int sum;

	va_start(argstosum, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(argstosum, int);
	}
	va_end(argstosum);
	return (sum);
}
