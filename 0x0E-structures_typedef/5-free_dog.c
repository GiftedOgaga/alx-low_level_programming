#include <stdio.h>
#include <stdlib.h>
#include  "dog.h"

/**
 *free_dog - a function that frees dogs
 *@d: a pointer to a struct
 *Return: 1 on success otherwise -1
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		{
			free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
	free(d);
	}
}
