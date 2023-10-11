#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * 0p_add - sum two numbers
 * @a: first num
 * @b: second num
 *
 * Return: sum of both numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: first num
 * @b: second num
 *
 * Return: difference of both numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 *
 * Return: multiplication of both numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
