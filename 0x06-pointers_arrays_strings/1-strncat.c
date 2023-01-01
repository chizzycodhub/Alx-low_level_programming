#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * Description: It will use at most n bytes from src
 * and src does not need to be null-terminated if it contains
 * n or more bytes.
 *
 * @src: string to be added to destination string
 * @n: number of bytes of the src string to be added
 * @dest: destination string
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
