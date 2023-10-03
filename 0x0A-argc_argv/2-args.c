#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of command line arg
 * @argv: aray that contains the program command line arg
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
