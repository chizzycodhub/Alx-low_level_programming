#include <stdio.h>

/**
 * main - Prints all argument it received including thefirst one.
 * @argc: The number of arguments passed
 * @argv: An array of pointers to the arguments provided
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
