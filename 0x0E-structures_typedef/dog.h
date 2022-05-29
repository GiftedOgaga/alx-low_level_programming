#ifndef DOG_H_INCLUDE_
#define DOG_H_INCLUDE_

/**
 *struct dog -fuction that defines a struct dog
 *@name: first member
 *@age: second member
 *@owner: third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t  *d);

#endif
