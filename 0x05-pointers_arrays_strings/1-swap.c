#include "main.h"

/**
 * swap_int-swap function
 * @a: pointer 1
 * @b: pointer 2
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
