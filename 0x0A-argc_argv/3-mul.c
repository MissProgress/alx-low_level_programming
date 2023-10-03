#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies 2 numbers
 * @argc: number of command line arg
 * @argv: aray that contains the program command line arg
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}