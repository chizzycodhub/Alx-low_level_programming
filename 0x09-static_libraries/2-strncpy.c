#include "main.h"

/**
 * _strncpy - a function that copies some number of bytes of a string *
 * @src: the string to be copied into dest
 * @dest: destination string that holds the copied string
 * @n: maximum number of bytes of src to be copied
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, src_len = 0;

	while (src[src_len] != '\0')
		src_len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i = src_len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
