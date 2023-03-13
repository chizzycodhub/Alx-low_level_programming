#include "variadic_functions.h"


/**
 * print_numbers - A function that prints numbers followed
 *                 by a new line.
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: The variable numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	if (separator == NULL)
		return;

	for (index = 0; index < n - 1; index++)
		printf("%d%s", va_arg(nums, int), separator);

	printf("%d", va_arg(nums, int));
	printf("\n");
	va_end(nums);
}
