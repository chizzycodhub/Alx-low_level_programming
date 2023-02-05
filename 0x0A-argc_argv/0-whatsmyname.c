#include "main.h"

/**
 * main - A program that prints its name followed by a new line.
 *
 * @argc: command line argument count.
 * @argv: command line argument.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);

	return (0);
}
