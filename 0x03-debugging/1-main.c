#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;
	
	printf("Infinite loop incoming :(\n");
	i = 0;
	while (i < 10)
	{
								                putchar(i); /* This part of the code is responsible for the infinite occurrance of the while loop as it fails to increment the input variable i */
	}
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
