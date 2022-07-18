#include "main.h"
#include <stdio.h>
/**
 * print - that prints the sum of the two
 * diagonals of a square matrix of integers
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int r, sum_1 = 0, sum_2 = 0;

	for (r = 0; r < (size * size); r++)
	{
		if (r % (size + 1) == 0)
			sum_1 += *(a + r);
		if (r % (size - 1) == 0 && r != 0 && r < size * size - 1)
			sum_2 += *(a + r);
	}
	printf("%d, %d\n", sum_1, sum_2);
}
