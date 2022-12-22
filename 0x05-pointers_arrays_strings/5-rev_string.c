#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: pointer to the string to reverse
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	char tmp;
	char *last;

	last = s;
	while (*(last + 1) != '\0')
		last = last + 1;
	while (s < last)
	{
		tmp = *s;
		*s = *last;
		*last = tmp;
		s = s + 1;
		last = last - 1;
	}
}
