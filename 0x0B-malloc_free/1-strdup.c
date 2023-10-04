#include "main.h"
#include <stdlib.h>

/**
* _strdup -  returns a pointer to a newly allocated space in memory
* @str: string duplicate
* Return: 0
*/

char *_strdup(char *str)
{
	char *poi;
	int i, r;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	poi = malloc(sizeof(char) * (i + 1));

	if (poi == NULL)
	{
		return ('\0');
	}

	for (r = 0; str[r]; r++)
	{
		poi[r] = str[r];
	}

	return (poi);
}
