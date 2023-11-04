#include "main.h"

/**
 * create_array - creates an array of chars n init with a specific char
 * @size: amount of space to be allocated
 * @c: character to be initialized
 * Return: pointer to the first member
 */

char *create_array(unsigned int size, char c)
{
	char *ptArr;
	unsigned int i;


 	if (size == 0)
	{
		return (NULL);
	}

	ptArr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ptArr[i] = c;
	}

	return (ptArr);
}
