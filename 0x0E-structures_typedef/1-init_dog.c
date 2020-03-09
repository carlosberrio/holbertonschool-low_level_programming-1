#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the new variable
 * @name: pointer to name
 * @age: age variable
 * @owner: pointer to owner name
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
