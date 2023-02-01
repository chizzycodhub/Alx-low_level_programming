#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * Description: This function appends the src string to the dest
 * string, overwritting the terminating null byte(\0) at the end
 * of dest, and then adds a terminating null byte
 *
 * @dest: Destination string to which another string is added
 * @src: Source string
 *
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, src_len = 0, i;

	while (src[src_len] != '\0')
		src_len++;
	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; i < src_len; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
