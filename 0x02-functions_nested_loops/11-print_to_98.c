#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98-print natural numbers from 0 to 98
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int num = 0;

	for (num >= 0; num <= 98; num++)
	{
		while (num != 98)
		{
			_putchar(num);
			_putchar(',');
			_putchar(' ');
		}

