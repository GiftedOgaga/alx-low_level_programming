#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Alpha;

	for (Alpha = 1; Alpha <= 100; Alpha++)
	{
		if ((Alpha % 3 == 0) && (Alpha % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (Alpha % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (Alpha % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", Alpha);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
