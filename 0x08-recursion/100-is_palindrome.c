#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);

/**
 * find_strlen - determines the length of the string
 *
 * @s: The entered string whose length is to be determined.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - checks whether a string is a palindrome.
 *
 * @s: The entered string
 * @len: The string length
 * @index: The index of each character of the string.
 *
 * Return: 1 if the string is a palindrome.
 *         0 if otherwise.
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - 1 - index])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * Description: while checking for a palindrome, an empty string
 *              is also considered a palindrome
 *
 * @s: The entered string
 *
 * Return: 1 if the string is a palindrome
 *         0 if the string is not a palindrome
 */
int is_palindrome(char *s)
{
	int index = 0, len = find_strlen(s);

	if (len == 0)
		return (1);

	return (check_palindrome(s, len, index));
}
