#include "main.h"
#include <stdlib.h>

/**
 *argstostr - Concatenates all arguments of the program into a string;
 *
 *aguments are separated by a new line in the string.
 *
 *@ac: The number of arguments passed to the program.
 *
 *@av: An array of pointers to the arguments.
 *
 *
 *
 *Return: If ac == 0, av == NULL, or the function fails - NULL.
 *
 *Otherwise - a pointer to the new string.
 *
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	aout = malloc((c + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			aout[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			aout[ia] = av[i][j];
	}
	aout[ia] = '\0';

	return (aout);
}
