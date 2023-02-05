#include "main.h"

/**
 * main - A program that prints all arguments it received
 *
 * @argc: The number of command line argument
 * @argv: The array name of all the command line argument
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int index = 0;

	if (argc > 0)
	{
		while (*(argv + index) != NULL)
		{
			printf("%s\n", *(argv + index));
			index++;
		}
	}
	return (0);
}
