#include <stdio.h>
#include "dog.h"

/**
 *init_dog - a function that initializes a fuction dog
 *@d: a pointer to struct dog
 *@name: first member
 *@age: second member
 *@owner: third member
 *Return: 0 on success otherwise 1
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
