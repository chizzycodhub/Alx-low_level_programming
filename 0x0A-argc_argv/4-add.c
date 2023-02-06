#include "main.h"
#include <ctype.h>

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

	while (argc-- > 1)
	{
		for (index = 0; argv[argc][index]; index++)
		{
			if (!isdigit(argv[argc][index]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
