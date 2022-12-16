#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: an integer that shows the number of times _ will be printed
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}
