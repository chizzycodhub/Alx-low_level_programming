#include "main.h"

/**
 * print_array - prints n elements of an array of integer
 *
 * @a: Pointer to the array to be printed
 * @n: The number of elements to be printed
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
