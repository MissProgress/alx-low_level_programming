#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coin to make change for an amnt of money
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int cents, amount = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d", 0);
		return (1);
	}
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		amount += 1;
	}
	printf("%d\n", amount); /* final outcome */
	return (0);
}
