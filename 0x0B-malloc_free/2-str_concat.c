#include "main.h"

/**
 * str_concat - A function that concatenates two strings
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the newly allocated memory space that
 *         contains contents of s1, s2 and null terminated.
 *         Otherwise, NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptrstr;
	int s1_len, s2_len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = s2_len = 0;
	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;

	ptrstr = malloc(sizeof(char) * (s1_len + s2_len) + 1);
	if (ptrstr == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		ptrstr[i] = s1[i];

	for (j = 0; j < s2_len; j++)
		ptrstr[i++] = s2[j];

	ptrstr[i] = '\0';
	return (ptrstr);
}
