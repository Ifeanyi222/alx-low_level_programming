#include <stdio.h>
/**
 * main - That prints its name, followed by a new line.
 *
 *
 * @argc: The number of command line arguments.
 *
 * @argv: An array that contains the program  arguments.
 * Return: 0 always.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
