#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiply two numbers and print its result
 * @argc: The number of arguments passed
 * @argv: An array of pointers to the arguments passed
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does notreceive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
		return (0);
	}
	printf("Error\n");
	return (1);
}
