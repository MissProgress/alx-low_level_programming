#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: target array holding int
 * @size: size of array
 * @cmp: pointer to the function to compare search integer
 *
 * Return: int element match, -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
			return (j);
	}
	return (-1);
}
