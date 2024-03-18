#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 *
 * @n: max size of the memory space to fill
 * @s: pointer to the memory area
 * @b: character to fill the given byte of memory
 *
 * Return: A pointer to resulting filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
