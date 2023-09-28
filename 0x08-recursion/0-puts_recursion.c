#include "main.h"

/**
* _puts_recursion - prints a string followed by a new line
* @s: string
*/

void _puts_recursion
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
