#include <stdio.h>
#include <stdlib.h>

/**
 * main-Entry point
 * @argc:count the number of parameters
 * @argv:pointer of array of pointers to strings entring main
 * Return: 1 if successful
 */

int main(int argc, char **argv)
{
	if (argc > 0)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
