#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to the new dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)");
		else
			printf("Name: %s", (*d).name);
		printf("Age: %f", (*d).age);
		if (!(d->owner))
			printf("Owner: (nil)");
		else
			printf("Owner: %s", (*d).owner);
	}
}
