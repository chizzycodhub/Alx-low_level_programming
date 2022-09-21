#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number whose last digit is to be determined
 *
 * Return: The last digit of a number r
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = -1 * (n % 10);
	else
		last_digit = n % 10;
	_putchar((last_digit % 10 + '0'));
	return (last_digit % 10);
}
