#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: some bytes of s2
 *
 * Return: A pointer to the newly allocated space in memory
 *         Otherwise, NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strings;
	unsigned int s1len, s2len, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1len = 0;
	while (s1[s1len] != '\0')
		s1len++;

	s2len = 0;
	while (s2[s2len] != '\0')
		s2len++;

	if (n >= s2len)
		strings = malloc(sizeof(char) * (s1len + s2len + 1));
	else
		strings = malloc(sizeof(char) * (s1len + n + 1));

	if (strings == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
		strings[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; j++)
		strings[i + j] = s2[j];

	strings[i + j] = '\0';
	return (strings);
}
