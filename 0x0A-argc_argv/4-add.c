#include "main.h"

/**
 * main - A program that adds positive numbers and prints result
 *
 * @argc: command line arguments count
 * @argv: array name of all the command line arguments
 *
 * Return: Always 0 - if successful
 *         Otherwise 1 - if failled
 */
int main(int argc, char *argv[])
{
	int index, sum = 0;

	if (argc > 0)
	{
		for (index = 1; argv[index]; index++)
		{
			if (atoi(argv[index]))
				sum += atoi(argv[index]);
			else if (!atoi(argv[index]))
			{
				printf("Error\n");
				return (1);
			}
			else
				printf("0\n");
		}
		printf("%d\n", sum);
	}
	return (0);
}
