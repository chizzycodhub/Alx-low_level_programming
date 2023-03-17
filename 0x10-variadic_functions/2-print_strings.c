#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: A variable number of strings to be printed
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *string;

	va_start(strings, n);

	i = 0;
	while (i < n)
	{
		string = va_arg(strings, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(strings);
}
