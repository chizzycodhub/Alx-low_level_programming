#include "main.h"

/**
 * _strlen_recursion - print the length of a string
 *
 * @s: A pointer to a string to be counted.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
