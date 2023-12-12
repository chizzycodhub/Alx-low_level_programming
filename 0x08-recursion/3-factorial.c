#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: the number whose factrial is to be determined
 *
 * Return: The factorial of the given number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
