#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int Bdigits;

	for (Bdigits = 0; Bdigits < 10; Bdigits++)
	{
		putchar(Bdigits + '0');
	}
	putchar('\n');
	return (0);
}
