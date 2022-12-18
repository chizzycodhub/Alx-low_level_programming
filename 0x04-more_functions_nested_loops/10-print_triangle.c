#include "main.h"

/**
 * print_triangle - print a triangle followed by a new line
 *
 *@size: The size of the triangle
 *
 * Description: You can only use _putchar function to print.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1, j, n;

	if (size > 0)
	{
		for (; i <= size; i++)
		{
			n = size - i;
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
