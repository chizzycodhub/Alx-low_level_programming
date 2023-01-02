#include "main.h"

/**
 * string_toupper - a function that changes all lowercase case
 * letters of a string to uppercase.
 *
 * @str: A pointer to the string of lowercase letters
 *
 * Return:  pointer  to  the resulting string str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
