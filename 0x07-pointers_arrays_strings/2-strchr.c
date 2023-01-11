#include "main.h"

/**
 * _strchr - locate a character in a string
 *
 * @s: pointer to the string
 * @c: character to find in a string
 *
 * Return: A pointer to the first occurrence of the character
 * NULL, if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
				return (s + i);
		i++;
	}
	if (c == s[i])
		return (s + i);
	return (NULL);
}
