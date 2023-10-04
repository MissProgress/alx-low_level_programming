#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars, and assign char c.
* @size: input size
* @c: initialization char
*
* Return: NULL if size = 0 / if it fails, a pointer to the array.
*/

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	j = 0;

	while (j < size)
	{
		str[j] = c;
		j++;
	}
	return (str);
}
