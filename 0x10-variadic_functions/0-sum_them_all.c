#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all-function that returns sum of all its parameters
 * @n:numbers of parameters
 * @...:A variable number of arguments
 * Return:sum fonparameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list argstosum;
	unsigned sum = 0;

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
