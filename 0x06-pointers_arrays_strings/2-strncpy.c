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

	int i = 0;
	int j = 0;

	while (src[j] != '\0' && n > j)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (n > 0)
	{
		dest[i] = '\0';
	}
	return (dest);
}
