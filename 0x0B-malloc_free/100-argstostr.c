#include "main.h"

/**
 * argstostr - A function that concatenates all the arguments
 *             of your program.
 *
 * @ac: A argument count
 * @av: A pointer to an array of all the command line arguments
 *
 * Return: A pointer to a new string
 *         Otherwise, NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *argscat;
	int arg, byte, argscat_index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	arg = 0;
	while (arg < ac)
	{
		byte = 0;
		while (av[arg][byte] != '\0')
		{
			size++;
			byte++;
		}

		arg++;
	}
	argscat = malloc(sizeof(char) * size + 1);
	if (argscat == NULL)
		return (NULL);

	argscat_index = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte] != '\0'; byte++)
		{
			argscat[argscat_index] = av[arg][byte];
			argscat_index++;
		}
		argscat[argscat_index++] = '\n';
	}
	argscat[size] = '\0';
	return (argscat);
}
