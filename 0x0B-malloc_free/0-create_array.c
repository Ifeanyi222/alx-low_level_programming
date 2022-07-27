#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 *
 * @size: The size of the array to be initialized.
 * 
 * @c: specific storage for  char
 *
 * Return: A pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ca;
	unsigned int index;

	if (size == 0)
		return (NULL);

	ca = malloc(sizeof(c) * size);

	if (ca == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		ca[index] = c;

	return (ca);
}
