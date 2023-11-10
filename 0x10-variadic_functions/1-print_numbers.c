#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: umber of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, list;

	va_list pointer;

	va_start(pointer, n);

	for (i = 0; i < n; i++)
	{
		list = va_arg(pointer, const unsigned int);
		printf("%d", list);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(pointer);
}
