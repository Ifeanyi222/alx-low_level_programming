#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * containing a copy of the string
 *
 * @str: The string.
 *
 * Return: If str == NULL.
 * Otherwise - pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dupst;
	unsigned int k, j;

	if (str == NULL)
		return (NULL);

	for (k = 0; str[k] != '\0'; k++)
		;

	dupst = (char *)malloc(sizeof(char) * (k + 1));

	if (dupst == NULL)
		return (NULL);

	for (j = 0; j <= k; j++)
		dupst[j] = str[j];

	return (dupst);
}
