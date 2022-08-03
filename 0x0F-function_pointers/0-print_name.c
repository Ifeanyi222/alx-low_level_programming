#include "function_pointers.h"

/**
 * print_name - that prints a name.
 *
 * @name: the input name.
 *
 * @f: the function pointer.
 *
 * Return: no.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
