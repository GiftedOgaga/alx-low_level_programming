#include <stdio.h>
#include "dog.h"

/**
 *print_dog - a function that prints dog
 *@d: a pointer to the struct dog
 *Return: 0 on success otherewise 1
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		{
			printf("Name: (nill)\n");
		}
		else if (d->age != 0)
		{
			printf("Age: (nill)\n");
		}
		else if (d->owner == NULL)
		{
			printf("(Owner: nill)\n");
		}
		else if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		else if (d->age)
		{
			printf("Age: %f\n", d->age);
		}
		else if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
