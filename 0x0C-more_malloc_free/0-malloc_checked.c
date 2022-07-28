#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using mallac.
 * @b: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 *
 */
void *malloc_checked(unsigned int b)
{
	char *pr;

	pr = malloc(b);
	if (pr == NULL)
		exit(98);
	return (pr);
}
