#include "main.h"

/**
 * _strcpy- copied pointed string
 * @dest: pointer 1
 * @src: pointer 2
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
			i++;
	}
	dest[i] = '\0';
	return (dest);
}
