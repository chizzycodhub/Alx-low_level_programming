int string_length(char *s);
int check_palindrome(char *s, int r, int l);
/**
 * is_palindrome - a function that shows that a string is a palindrome
 *
 * @s: the given string
 *
 * Return: 1 if a string is palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int length = string_length(s);

	if (length == 0)
		return (1);
	else
		return (check_palindrome(s, 0, length - 1));
}

/**
 * string_length - determines the length of a given string
 *
 * @s: the given string
 *
 * Return: The length of the string
 */
int string_length(char *s)
{
	if (*s != '\0')
		return (1 + string_length(s + 1));
	else
		return (0);
}

/**
 * check_palindrome - checks whether a string is a palindrome
 *
 * @s: the given string
 * @l: left index
 * @r: right index
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int check_palindrome(char *s, int r, int l)
{
	if (r >= l)
		return (1);
	else if (s[l] == s[r])
		return (check_palindrome(s, r + 1, l - 1));
	else
		return (0);
}
