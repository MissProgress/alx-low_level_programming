#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates the details of a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: name of the owner of the new dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n, i, o;
	dog_t *ndog;

	if (name == NULL || owner == NULL)
		return (NULL);
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	n++;
	ndog->name = malloc(sizeof(char) * n);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		ndog->name[i] = name[i];

	ndog->age = age;

	for (o = 0; owner[i]; o++)
		;
	o++;
	ndog->owner = malloc(sizeof(char) * o);
	if (ndog->owner == NULL)
	{
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		ndog->owner[i] = owner[i];

	return (ndog);
}
