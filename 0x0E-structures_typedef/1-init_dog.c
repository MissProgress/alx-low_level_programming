#include "dog.h"
/**
 * init_dog - initializing th struct dog
 * @d: pointer to the new variable name
 * @name: Pointer to the new name
 * @age: Pointer to the new age
 * @owner: pointer to the new dog owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
