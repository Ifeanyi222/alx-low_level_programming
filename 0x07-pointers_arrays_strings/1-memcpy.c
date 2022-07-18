#include "main.h"
/**
 * _memcpy - copy the memory area,
 * @dest: destination to the memory area.
 * @src: source of the memory area.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
