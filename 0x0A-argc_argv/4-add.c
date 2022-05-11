#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main-Entry point
 * @argc: first parameter
 * @argv: second parameter
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 1; i < argc; i++)
	{
		do
		{
			sum += argv[i];
		}
		while (isdigit(argv[i]))
	}
	if (argv[i

