#include "main.h"

/**
 * print_diagonal - print diagonal line on terminal
 *
 * @n: An integer that indicates the number of time \ is printed
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}

