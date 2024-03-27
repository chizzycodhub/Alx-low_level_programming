#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change for
 *        an amount of money.
 * @argc: The number of arguments passed
 * @argv: an array of pointers to the arguments
 *
 * Return: 1 if the argument passed is more than two.
 *         Otherwise 0.
 */
int main(int argc, char *argv[])
{
	int coins_count, amounts;

	coins_count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amounts = atoi(argv[1]);

	while (amounts > 0)
	{
		coins_count++;
		if ((amounts - 25) >= 0)
		{
			amounts -= 25;
			continue;
		}
		if ((amounts - 10) >= 0)
		{
			amounts -= 10;
			continue;
		}
		if ((amounts - 5) >= 0)
		{
			amounts -= 5;
			continue;
		}
		if ((amounts - 2) >= 0)
		{
			amounts -= 2;
			continue;
		}
		amounts--;
	}
	
	printf("%d\n", coins_count);

	return (0);
}
