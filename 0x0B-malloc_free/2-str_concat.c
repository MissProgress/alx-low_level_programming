#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, a, b;
	char *ptr_concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}

	ptr_concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr_concat == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < len1; a++)
	{
		ptr_concat[a]	= s1[a];
	}
	for (b = 0; b <= len2; b++)
	{
		ptr_concat[a] = s2[b];
		a++;
	}
	return (ptr_concat);
}
