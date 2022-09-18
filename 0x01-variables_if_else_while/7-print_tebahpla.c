#include <stdio.h>

/**
 * main - Print the lowercase alphabeth in reverse
 *
 * Return: 0 on success
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
