#include "main.h"

/**
 * print_alphabet_x10-print alphabet in lower case followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int count = 1;
	char alphabet;

	while (count <= 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
		count += 1;
	}
}}
