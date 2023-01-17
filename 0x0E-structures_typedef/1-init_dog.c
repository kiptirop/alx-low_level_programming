#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct type dog
 * @name: pointer to char names dog
 * @age: the dogs age
 * @owner: pointer to dogs owner
 * Return: no
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
