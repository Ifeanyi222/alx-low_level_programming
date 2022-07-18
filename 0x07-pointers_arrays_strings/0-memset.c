#include "main.h"
/**
 * function - that fills memory with a constant byte,
 * @s: the  memory area.
 * @b: constant byte.
 * @n: bytes filled.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
