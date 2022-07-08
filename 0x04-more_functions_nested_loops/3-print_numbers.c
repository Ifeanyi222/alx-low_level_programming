#include "main.h"

/**
 *print_numbers - prints the numbers, from 0 to 9
 *
 *print_numbers - prints 0123456789\n
 *
 *Return: Always 0.
 *
 *Return: void
 *
 */
void print_numbers(void)
{
    char x;
    for (x = 0; x <= 10; x++)
    {
	_putchar(x + '0');

    }
    _putchar('\n');
return (0);
}

