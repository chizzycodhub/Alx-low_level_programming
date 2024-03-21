#include <stdio.h>

/**
 * main - Print the number of arguments passed
 * @argc: The number of arguments passed
 * @argv:  An array of pointers to arguments provided
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
