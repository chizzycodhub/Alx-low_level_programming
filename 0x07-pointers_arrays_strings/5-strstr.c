#include "main.h"

/**
 * _strstr - finds the first occurrence of a substring
 *
 * @haystack: A pointer to the string that has the substring
 * @needle: A pointer to the substring to be located
 *
 * Return: A pointer to the start of the located string
 * Or NULL, if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack != '\0')
	{
		for (i = 0; *haystack == needle[i]; i++)
			haystack++;
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
