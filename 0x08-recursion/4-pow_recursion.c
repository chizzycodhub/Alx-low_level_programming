#include "main.h"

/**
 * _pow_recursion - returns the result of x raised to the power of y
 *
 * @x: number raised to the power of y
 * @y: number that represents the power
 *
 * Return: The result of the operation between x and y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
