#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integer
 * @a: First integer
 * @b: Second integer
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of the division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Gives the remainder of the division of two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The remainder of the division of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
