#include "main.h"
/**
 * _pow_recursion - returns the power of a number
 * @x: the given number
 * @y: the power of the given number
 * Return: x ** y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
	
}
