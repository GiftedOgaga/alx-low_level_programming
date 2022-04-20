#include "main.h"

/**
 * reset_to_98- pointer value update
 * @n: pointer value
 * Return: 0
 */

void reset_to_98(int *n)
{
	int val = 98;
	n = &val;
}
