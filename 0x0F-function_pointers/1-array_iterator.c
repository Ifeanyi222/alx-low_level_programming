#include "function_pointers.h"

/**
 * array_iterator - that executes a function given as a
 * parameter on each element of an array.
 *
 * @size: the size of the array.
 *
 * @action: is a pointer to the function.
 *
 * Return: no.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array && action)
		for (k = 0; k < size; k++)
			action(array[k]);
}
