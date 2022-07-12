#include "main.h"

/**
 * print_rev - prints a string in revrse followed by a new line
 * @s: Declaration of a character *s
 * Return: No return
 */

void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
	{
	}
	for (a = a - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
