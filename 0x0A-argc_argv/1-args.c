#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of command line arg
 * @argv: aray that contains the program command line arg
 * Return: 0 on success
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
