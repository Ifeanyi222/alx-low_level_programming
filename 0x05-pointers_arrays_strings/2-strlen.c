#include "main.h"

/**
 * _strlen - Returns lenght of a string
 * @s: String variable
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	int d;

	d = 0;
	while (s[d] != '\0')
	{
		d++;
	}
	return (d);
}
