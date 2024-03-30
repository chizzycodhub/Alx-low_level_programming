#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in
 *           memory, which contains a copy of the string given
 * @str: The string given as a parameter
 *
 * Return: On success, a pointer to the duplicate of the given string
 *         On failure, a NULL to show insufficient memory.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		size++;

	duplicate = (char *) malloc(sizeof(char) * size);
	if (duplicate == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		duplicate[i] = str[i];
		i++;
	}
	duplicate[i] = '\0';

	return (duplicate);
}
