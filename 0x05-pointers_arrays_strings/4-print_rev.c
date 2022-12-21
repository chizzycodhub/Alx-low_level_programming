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
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len--)
		_putchar(s[len]);
	_putchar('\n');
}
