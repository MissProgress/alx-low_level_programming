#include "main.h"
/**
* print_numbers - prints the numbers, from 0 to 9, followed by a new line.
* Return: void
777*/

void print_numbers(void)
{
char m;

for (m = '0'; m < '9'; m++)
{
	_putchar(m);
}
	_putchar('\n');
}