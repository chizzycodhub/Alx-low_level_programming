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
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
