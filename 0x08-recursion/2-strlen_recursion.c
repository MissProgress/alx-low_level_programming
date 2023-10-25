#include "main.h"
/**
 * _strlen_recursion - prints the length of the string
 * @s: pointer to the string
 * Return: 0 on success
 */
int _strlen_recursion(char *s)
{
	int p = 0;

	if (*s == '\0')
		return (p);
	p++;
	p += _strlen_recursion(++s);
	return (p);
}
