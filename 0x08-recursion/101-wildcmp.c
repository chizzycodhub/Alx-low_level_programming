#include "main.h"

/**
 * wildcmp - a function that compares two string.
 *
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: 1 if the strings are identical
 *         0 if otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
		return (1);
	if (*s2 == '*' && *(s1 + 1) && *s2)
		return (0);
	return (0);
}
