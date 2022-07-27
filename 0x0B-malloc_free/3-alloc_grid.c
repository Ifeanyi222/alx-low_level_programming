#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of 
 * integers with each element.
 *
 * @width: The width of the 2-dimensional array.
 * @height: height of the 2-dimensional array.
 *
 * Return: pointer on failure
 */
int **alloc_grid(int width, int height)
{
	int **twoDi;
	int i, k;

	if (width < 1 || height < 1)
		return (NULL);

	twoDi = malloc(height * sizeof(int *));
	if (twoDi == NULL)
	{
		free(twoDi);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		twoDi[i] = malloc(width * sizeof(int));
		if (twoDi[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(twoDi[i]);
			free(twoDi);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (k = 0; k < width; k++)
			twoDi[i][k] = 0;

	return (twoDi);
}
