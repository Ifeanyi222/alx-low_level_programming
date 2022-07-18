#include "main.h"

/**
 * print - prints the chessboard
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int k, i = 0;

	for (k = 0; k < 64; k++)
	{
		if (k % 8 == 0 && k != 0)
		{
			i = k;
			_putchar('\n');
		}
		_putchar(a[k / 8][k - i]);
	}
	_putchar('\n');
}
