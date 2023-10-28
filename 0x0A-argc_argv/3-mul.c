#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers passed to it as argument
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if numbers != 2 or 0 on success
 */

int main(int argc, char *argv[])
{

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
