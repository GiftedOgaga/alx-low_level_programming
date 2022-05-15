#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup-returns a pointer to a newly alocated space in the memory
 * @str:pointer to string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *str1;
	int i;
	int j;

	if (str == NULL)
	{
		return (0);
	}
	/* find the length of the given string */
	for (i = 0; str[i] != '\0'; i++)
		;
	/* alocate space to str1 equivalent to the lenght of the given string */
	str1 = malloc((sizeof(char) * i) + 1);
	if (str1 == NULL)
	{
		return (0);
	}
	for (j = 0; j < i; j++)
	{
		str1[j] = str[j];
	}
	str1[j] = '\0';
	return (str1);
}
