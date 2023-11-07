#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - name of new struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
