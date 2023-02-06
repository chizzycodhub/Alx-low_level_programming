#include "main.h"

/**
 * main - A program that prints the minimum number of coins to
 *        make change for an amount of money
 *
 * @argc: Number of command line argument
 * @argv: The array name for all the command line argument
 *
 * Return: 1 - if one argument is passed
 *         0 - if the program run sucessfully
 */
int main(int argc, char *argv[])
{
	int amount, coins_count = 0;

	if (argc == 2)
	{
		amount = atoi(argv[1]);
		if (amount < 0)
			printf("0\n");
		if (amount % 25 >= 0)
		{
			coins_count = amount / 25;
			amount = amount % 25;
		}
		if (amount % 10 >= 0)
		{
			coins_count += amount / 10;
			amount = amount % 10;
		}
		if (amount % 5 >= 0)
		{
			coins_count += amount / 5;
			amount = amount % 5;
		}
		if (amount % 2 >= 0)
		{
			coins_count += amount / 2;
			amount = amount % 2;
		}
		if (amount % 1 >= 0)
		{
			coins_count += amount;
		}
		printf("%d\n", coins_count);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
