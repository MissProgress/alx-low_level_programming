#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - gs the operators to be used
 * @s: pointer
 *
 * Return: the operator needed
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	/* s does not match any of the operands */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f); /*return operation */
}
