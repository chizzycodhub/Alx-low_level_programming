#include <stdlib.h>


/**
 * str_concat - joins two given strings and returns a pointer to
 *              the nwely allocated memory space that contains the
 *              joined string
 * @s1: The first string
 * @s2: The second string
 *
 * Return: On success, a pointer to the joined string
 *         On failure, a NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, s1_size, s2_size;
	char *join;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	for (s1_size = 0; s1[s1_size]; s1_size++)
		;

	for (s2_size = 0; s2[s2_size]; s2_size++)
		;

	join = (char *) malloc(sizeof(char) * (s1_size + s2_size + 1));
	if (join == NULL)
		return (NULL);

	for (i = 0; i < s1_size; i++)
		join[i] = s1[i];

	for (; i < (s1_size + s2_size); i++)
		join[i] += s2[i - s1_size];

	join[i] = '\0';

	return (join);
}
