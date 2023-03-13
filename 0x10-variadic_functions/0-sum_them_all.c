#include "variadic_functions.h"

/**
 * sum_them_all - sums all of of its parameters
 * @n: The number of  parameters passed to the function.
 * @...: Variable parameters to be summed
 *
 * Return: if n == 0 - 0
 *         Otherwise - The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list others;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(others, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(others, int);
	}
	va_end(others);
	return (sum);
}
