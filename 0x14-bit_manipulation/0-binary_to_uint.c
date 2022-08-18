#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int arr, base_two;

	if (!b)
		return (0);

	i = 0;

	for (arr = 0; b[arr] != '\0'; arr++)
		;

	for (arr--, base_two = 1; arr >= 0; arr--, base_two *= 2)
	{
		if (b[arr] != '0' && b[arr] != '1')
		{
			return (0);
		}

		if (b[arr] & 1)
		{
			i += base_two;
		}
	}

	return (i);
}
