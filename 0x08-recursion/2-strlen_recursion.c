#include "main.h"
/**
 * _strlen_recursion - Determines the length of a given string recursively
 *
 * @s: The string whose length is determined
 *
 * Return: The length.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
