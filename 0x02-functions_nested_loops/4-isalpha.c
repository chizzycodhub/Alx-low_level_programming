#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character to check
 *
 * Return: 1 when character is a letter, lowercase or uppercase
 * 0 when it is not.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
