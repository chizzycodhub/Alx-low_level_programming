#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: arrays of pointers to the strings provided
 *
 * Return: A pointer to a new string on success
 *         NULL, if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_c, k;
	char *args;


	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, total_c = 0; i < ac; i++, total_c++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_c++;
	}

	args = (char *) malloc(sizeof(char) * (total_c + 1));
	if (args == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			args[k] = av[i][j];
		}
		args[k] = '\n';
	}
	args[k] = '\0';

	return (args);
}
