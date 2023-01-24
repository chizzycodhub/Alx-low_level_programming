#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power
 *                  of y.
 *
 * @x: The number to be raised to a power
 * @y: The power of the number x.
 *
 * Return: If y < 0, return -1.
 *         If y >= 0, return the value of x to the power of y.
 */
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	res *= _pow_recursion(x, y - 1);
	return (res);
}

