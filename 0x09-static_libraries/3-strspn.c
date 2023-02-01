#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: Pointer to a string that has the substring
 * @accept: substring
 *
 * Return: length of the substing
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				byte++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (byte);
		}
		s++;
	}
	return (byte);
}
