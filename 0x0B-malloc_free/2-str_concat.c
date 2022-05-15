#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat-function that concatenate two strings
 * @s1:pointer to first string
 * @s2:pointer to second string
 * Return:newly alocated space
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *str;
	int q;

	if (s1 == NULL)
	{
		return (0);
	}
	if (s2 == NULL)
	{
		return (0);
	}
	/*find the length of first string */
	for (i = 0; s1[i] != '\0'; i++)
		;
	/* find the length of second string */
	for (j = 0; s2[j] != '\0'; j++)
		;
	/* alocate equivalent memory to our newly creater pointer */
	str = malloc(sizeof(char) * (i + j + 1));
		if (str == NULL)
		{
			return (NULL);
		}
	for (k = 0; k < i; k++)
	{
		str[k] = s1[k];
	}
	k++;
	for (q = 0; q < j; q++)
	{
		str[k] = s2[q];
		k++;
	}
	str[k] = '\0';
	return (str);
}

