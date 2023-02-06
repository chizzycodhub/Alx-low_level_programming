#include "main.h"

/**
 * main - A program that multiplies the first two integers
 *        and prints the product
 *
 * @argc: Number of command line arguments
 * @argv: array name for all the command line arguments
 *
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = a * b;
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
