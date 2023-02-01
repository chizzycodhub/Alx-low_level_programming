#include "main.h"

/**
 * _strpbrk - a function that locate first occurence in the
 * in the string s of any of the bytes in the string accept
 *
 * @s: A pointer to the string to be searched
 * @accept: A pointer to the string that is searched in s
 *
 * Return: A pointer to the bytes that matches the search
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}


