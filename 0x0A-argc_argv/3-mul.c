#include <stdio.h>
#include <stdlib.h>

/**
 * main-Entry point
 * @argc:first parameter
 * @argv:second parameter
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int mul;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	mul = a * b;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", mul);
		return (0);
	}
}
