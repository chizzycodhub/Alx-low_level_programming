#include "main.h"

/**
 *print_sign - print the sign of a number
 *
 * @n: The number to check
 *
 * Return: 1 when the number is greater than zero
 * 0 when the number is zero
 * -1 when the number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
