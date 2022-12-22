#include "main.h"

/**
 * puts_half - prints the second half of a string
 *
 * @str: A pointer to the string to print
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	while (s[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(s[i]);

	_putchar('\n');
}
