#include <unistd.h>

/**
 * _putchar - writes a character c to the standard output
 *
 * @c: the character to print
 *Return: On success 1
 *On fail -1 and error to print appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
