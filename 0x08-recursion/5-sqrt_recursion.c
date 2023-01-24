#include "main.h"
int _find_sqrt(int num, int root);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: The number whose square root is to be determined.
 *
 * Return: If n has a natural square root - square root
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_find_sqrt(n, 1));
}

/**
 * _find_sqrt - finds the square root of a natural number.
 *
 * @num: The number whose square root is to determined
 * @root: The square root of the number num.
 *
 * Return: The square root of the number
 */
int _find_sqrt(int num, int root)
{
	if (root * root == num)
		return (root);
	else if (root > num)
		return (-1);
	return (_find_sqrt(num, root + 1));
}

