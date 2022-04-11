#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char Salpha;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (Salpha = 'a'; Salpha <= 'f'; Salpha++)
	{
		putchar(Salpha);
	}
		putchar('\n');
		return (0);
}
