#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: destination where string will be copied to.
 * Return: pointer to the first member of the given string
 */
char *_strdup(char *str)
{
	char *ptrdup;
	unsigned int str_len, copy;

	if (str == NULL)
	{
		return (NULL);
	}
	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	ptrdup = malloc(sizeof(char) * str_len + 1);
	if (ptrdup == NULL)
	{
		return (NULL);
	}
	for (copy = 0; copy <= str_len; copy++)
	{
		ptrdup[copy] = str[copy];
	}
	return (ptrdup);
}
