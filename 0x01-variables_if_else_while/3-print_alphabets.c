#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Lalpha = '1';
	char Ualpha = '1';

	for (Lalpha = 'a'; Lalpha <= 'z'; Lalpha++)
	{
		putchar(Lalpha);
	}
	for (Ualpha = 'A'; Ualpha <= 'Z'; Ualpha++)
	{
		putchar(Ualpha);
	}
		putchar('\n');
		return (0);
}
