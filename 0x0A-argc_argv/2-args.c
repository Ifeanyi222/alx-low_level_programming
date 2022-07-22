#include <stdio.h>
/**
 * main - That prints all arguments it receives.
 * 
 * @argc: The number of command line arguments.
 * 
 * @argv: The array that contains the program command line arguments.
 * Return: 0 - always.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
