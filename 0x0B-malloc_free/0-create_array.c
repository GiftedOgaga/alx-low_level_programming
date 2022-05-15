#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array-function to creatr and array and initialize it with characters
 * @size:size of array
 * @c:charater
 * Return: Null if it fails otherwise return a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (0);
	}
	array = malloc(sizeof(char) * size);
	for (i = 0; i < size ; i++)
	{
		*(array + i) = c;
	}
	*(array + i) = '\0';
	if (array == 0)
	{
		return (0);
	}
	return (array);
}

