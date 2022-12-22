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
	int i = 0;

	while (str[i] != '\0')
		i++;
	for (i /=2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
