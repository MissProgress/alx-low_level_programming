#include "main"

/**
 * _isupper - checks for uppercase character.
 * Return: return an integer value.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
