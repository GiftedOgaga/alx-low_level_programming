#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings-function that print strings
 * @separator:string separator
 * @n:numbers of arguments
 * @...:Remaining arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list printstring;

	va_start(printstring, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(printstring, char *);
		if (x == NULL)
		{
			printf("nill");
		}
		else
		{
			printf("%s", x);
		}

	if ((i != n - 1) && (separator != NULL))
	{
		printf("%s", separator);
	}
	}
	printf("\n");
	va_end(printstring);
}
