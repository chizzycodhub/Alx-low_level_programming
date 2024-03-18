#include "main.h"

/**
 * _strcpy - function that copies the string pointed to including
 * terminating null byte to a buffer pointed to by another pointer
 *
 * @src: Pointer to a string to be copied
 * @dest: Pointer to a buffer string is copied to
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
