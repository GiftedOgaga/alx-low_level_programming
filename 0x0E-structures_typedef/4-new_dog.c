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
	dog_t *newdog;
	int i, j, k;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(sizeof(newdog->name) * i + 1);
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		newdog->name[k] = name[k];
	}
	newdog->name = '\0';
	newdog->age = age;
	newdog->owner = malloc(sizeof(newdog->owner) * j + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
	{
		newdog->owner[k] = owner[k];
	}
	newdog->owner[k] = '\0';
	return (newdog);
}
