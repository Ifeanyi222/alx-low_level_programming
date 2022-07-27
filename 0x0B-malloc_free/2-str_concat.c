#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: The first string to be concatenated.
 *
 * @s2: The second string to be concatenated to first.
 *
 * Return: A pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *str_concate;
	unsigned int l, m, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l = 0; s1[l] != '\0'; l++)
		;

	for (m = 0; s2[m] != '\0'; m++)
		;

	str_concate = malloc(sizeof(char) * (l + m + 1));

	if (str_concate == NULL)
	{
		free(str_concate);
		return (NULL);
	}

	for (k = 0; k < l; k++)
		str_concate[k] = s1[k];

	limit = m;
	for (m = 0; m <= limit; k++, m++)
		str_concate[k] = s2[m];

	return (str_concate);
}
