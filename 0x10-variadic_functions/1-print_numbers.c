#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j, array;

	va_list ptr;

	va_start(ptr, n);

	for (j = 0; j < n; j++)
	{
		array = va_arg(ptr, const unsigned int);
		printf("%d", array);

		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(ptr);
}
