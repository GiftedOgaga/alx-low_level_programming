#include <stdio.h>
#include <stdlib.h>

/**
 * main-Entry point
 * @argc:first parameter
 * @argv: second parameter
 * Return: 0 at success
 */

int main(int argc, char **argv __attribute__((unused)))
{
	argc -= 1;
	printf("%d\n", argc);
	return (0);
}
