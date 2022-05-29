#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that prints a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, j, k;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(sizeof(new_dog->name) * i);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		new_dog->name[k] = name[k];
	}
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(new_dog->owner) * j);
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
	{
		new_dog->owner[k] = owner[k];
	}
	return (new_dog);
}
