#include "main.h"

/**
 * reverse_array - a function that reverses an array of integer
 *
 * @a: A pointer to an array to be reversed
 * @n: The number of elements of the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int first_index = 0, last_index = n - 1, tmp;

	while (first_index < last_index)
	{
		tmp = a[first_index];
		a[first_index] = a[last_index];
		a[last_index] = tmp;
		first_index++;
		last_index--;
	}
}
