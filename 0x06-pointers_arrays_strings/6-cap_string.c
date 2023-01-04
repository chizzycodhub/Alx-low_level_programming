#include "main.h"

/**
 * cap_string - a function that capitalized all words of a string
 *
 * @str: pointer to the string
 *
 * Return: A pointer to the resulting string str.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		if ((str[i] == ' ' ||
			str[i] == '\t' ||
			str[i] == '\n' ||
			str[i] == ',' ||
			str[i] == ';' ||
			str[i] == '.' ||
			str[i] == '!' ||
			str[i] == '?' ||
			str[i] == '"' ||
			str[i] == '(' ||
			str[i] == ')' ||
			str[i] == '{' ||
			str[i] == '}') &&
			(str[i + 1] >= 'a' &&
			str[i + 1] <= 'z'))
		str[i + 1] -= 32;
		i++;
	}
	return (str);
}
