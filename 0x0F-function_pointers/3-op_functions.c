#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - performs addition of 2 int
 * @a: num1
 * @b: num2
 * Return: sum of 2 ints
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs subtraction of b from a
 * @a: num1
 * @b: num2
 * Return: sub of b from a
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs multiplication of a and b
 * @a: num1
 * @b: num2
 * Return: answer
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide a by b
 * @a: num1
 * @b: num2
 * Return: answer
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - performs modulus operation
 * @a: num1
 * @b: num2
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
