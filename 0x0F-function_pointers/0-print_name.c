#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @f: variable to hold the name
 * @name: inputted name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
