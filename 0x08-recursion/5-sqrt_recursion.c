#include "main.h"
/**
 * check_sqrt - checks the square of a number - a helper function
 * @n: number
 * @num: accumulator
 * Return: square root on n else -1 if n is not a natural square root
 */

int check_sqrt(int n, int num)
{
	if ((num * num) > n) /* not a natural square root */
		return (-1);
	if ((num * num) == n)
		return (num);
	return (check_sqrt(n, num + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a given number
 * @n: number
 * Return: sqrt of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (check_sqrt(n, 0));
}
