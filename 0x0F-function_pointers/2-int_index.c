#include "function_pointers.h"

/**
 * int_index - that searches for an integer.
 * 
 * @size: size of the element in the array.
 *
 * @cmp: is a pointer to the function to be used
 * to compare values.
 *
 * Return: the index of the first element for which the cmp
 * function does not return 0. If no elements matches,
 * return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (j = 0; j < size; j++)
			if (cmp(array[j]))
				return (j);
	}

	return (-1);
}
