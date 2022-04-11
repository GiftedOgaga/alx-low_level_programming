#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Rvalpha = '1';

	for (Rvalpha = 'z'; Rvalpha >= 'a'; Rvalpha--)
	{
		putchar(Rvalpha);
	}
		putchar('\n');
		return (0);
}
