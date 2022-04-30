#include "main.h"

/**
 * _pow_recursion-function that raises x to the power y
 * @x: the base number
 * @y: the index number
 * Return: power of x to y
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
