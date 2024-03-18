#include "main.h"

/**
 *_islower - checks for lowercase character
 *
 * @c: character to check
 *
 * Return: 1 when the character is lowercase.
 * 0 when it is not.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
