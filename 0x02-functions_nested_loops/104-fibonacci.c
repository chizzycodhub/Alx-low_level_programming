#include <stdio.h>

/**
 *  main - entry point
 *
 *  Description: the function finds and prints the first 98 fibonacci numbers
 *  starting with 1 and 2, followed by a new line
 *
 *  Return: Always 0
 */
int main(void)
{
	int count = 3;

	long int first = 1, second = 2;
	long int next = first + second;

	printf("%ld, %ld, ", first, second);
	while (count <= 98)
	{
		if (count == 98)
			printf("%ld\n", next);
		else
			printf("%ld, ", next);
		first = second;
		second = next;
		next = first + second;
		count++;
	}
	return (0);
}
