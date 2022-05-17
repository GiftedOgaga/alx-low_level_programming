#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers-a function that prints numbers followed by a new line
 * @n:numbers of arguments
 * @...: remaining arguments
 * @separator:separating char
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int x;
	va_list printnum;

	va_start(printnum, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(printnum, int);
		printf("%d", x);
		if ((i != n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	va_end(printnum);
}
