#include "main.h"

/**
 * _memcpy - copy n bytes from src memory area to another
 * memory area dest
 *
 * @src: pointer to the source memory area - src
 * @dest: pointer to the new memory area - dest
 * @n: memory size of the source memory area to copy
 *
 * Return: A pointer to the new memory area - dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
