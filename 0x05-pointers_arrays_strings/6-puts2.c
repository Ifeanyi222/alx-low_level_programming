#include "main.h"

/**
 * puts2 - prints every othr characteer of a string
 * @str: Declartion of str
 * Return: Void
*/

void puts2(char *str)
{
	int a;
	char b;

	for (a = 0; str[a] != 0; a++)
	{
		if (a % 2 == 0)
		{
			b = str[a];
			_putchar(b);
		}
	}
	_putchar('\n');
}
