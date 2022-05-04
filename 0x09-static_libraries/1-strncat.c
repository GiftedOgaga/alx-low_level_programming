#include "main.h"

/**
 * *_strncat-concatenate two strings
 * @dest:pointer to destination string
 * @src:pointer to source string
 * @n:numbers of characters from src to concatenate into dest
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
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
