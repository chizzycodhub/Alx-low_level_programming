#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Alx School student
 * @ac: argument count
 * @av: array to pointers to a string
 * Return: always 0.
 */
int main(int ac, char **av)
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
