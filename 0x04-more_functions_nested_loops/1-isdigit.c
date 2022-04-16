#include "main.h"

/**
 * _isdigit - checks for digits between 0 and 9
 * @c: Outputs int
 *
 * Return: 1 if c is a digit otherwise return 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
