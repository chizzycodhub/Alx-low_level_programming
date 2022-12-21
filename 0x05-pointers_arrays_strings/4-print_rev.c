#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: pointer to the string to be reverse
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0, len = 0;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
