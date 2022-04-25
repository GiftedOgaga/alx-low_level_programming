#include "main.h"

/**
 * _strncpy-copy a string from source to destination
 * @dest:destination string
 * @src: source string
 * @n: numbers of charcaters to copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
	}
	for ( ; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
