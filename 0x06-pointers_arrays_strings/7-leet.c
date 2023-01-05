#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 *
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded string,
 */
char *leet(char *str)
{
	int i = 0, j;

	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
		s[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (str[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s[j])
				str[i] = subs[j];
		}
		i++;
	}
	return (str);
}
