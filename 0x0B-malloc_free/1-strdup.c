#include "main.h"

/**
 * _strdup - A function that returns a pointer to a newly
 *           allocated space in memory which contains a copy
 *           of the string given in a parameter.
 *
 * @str: The string to be copied to a newly allocated space
 *
 * Return: On success - a pointer to the duplicated string
 *         Otherwise, NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *ptrstr;
	int strlen = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[strlen])
		strlen++;

	ptrstr = malloc(strlen * sizeof(char) + 1);
	if (ptrstr == NULL)
		return (NULL);

	for (i = 0; i < strlen; i++)
		ptrstr[i] = str[i];

	ptrstr[i] = '\0';
	return (ptrstr);
}
