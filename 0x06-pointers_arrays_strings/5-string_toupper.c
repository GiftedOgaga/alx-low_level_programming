#include "main.h"

/**
 * string_toupper-function that changes all lower case letters to upper case
 * @s:pointer to string
 * Return:void
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
