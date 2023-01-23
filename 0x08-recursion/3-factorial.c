#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: A given number whose factorial is to determined.
 *
 * Return: If n > 0, return the factorial of the given number.
 *	       If n < 0, return -1 to indicate an error.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

