#include "main.h"

/**
 * main - A program that prints the number of arguments
 *        passed into it.
 * @argc: The number of command line argument.
 * @argv: The array name of all the command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	argc = 0;

	while (argv[argc] != NULL)
		argc++;
	printf("%d\n", argc - 1);
	return (0);
}

