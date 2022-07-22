#include <stdio.h>
/**
 * main - prints the number of arguments passed.
 *
 * @argc: The number of command line arguments to the program.
 *
 * @argv: An array that contains the program command line arguments.
 * Return: 0 alway.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
