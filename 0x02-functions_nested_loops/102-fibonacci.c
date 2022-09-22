#include <stdio.h>

/**
 *  main - print first 50 fibonacci numbers, starting with 1 and 2
 *
 *  Return: always 0.
 */
int main(void)
{
	int i;
	long int fiboNum[50];

	fiboNum[0] = 1;
	fiboNum[1] = 2;
	printf("%ld, %ld, ", fiboNum[0], fiboNum[1]);

	for (i = 2; i < 50; i++)
	{
		fiboNum[i] = fiboNum[i - 1] + fiboNum[i - 2];
		if (i == 49)
			printf("%ld\n", fiboNum[i]);
		else
			printf("%ld, ", fiboNum[i]);
	}
	return (0);
}
