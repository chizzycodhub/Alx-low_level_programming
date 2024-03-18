#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 *
 * Return: If s1 < s2, a negative difference of the unmatched
 *		   character.
 *			If s1 = s2, 0
 *			If s1 > s2, a positive difference of the unmatched
 *		   character.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
