#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - perform calculator functions on command line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: result of calc func execution
 */

int main(int argc, char *argv[])
{
	char *op; /* operator*/
	int num1, num2; /* number inputs */

	if (argc != 4) /* if arg count is wrong */
	{
		printf("Error\n");
		exit(98);
	}

	/* set cmd arg input */
	num1 = atoi(argv[1]); /* input 1*/
	op = (argv[2]); /*operator input */
	num2 = atoi(argv[3]); /* second input */

	/* if operator not in operator list */
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	/* if user tries to divide  or perform modulus by 0 */
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/* print results */
	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
