#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: number whose absolute value is to be determined
 *
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
