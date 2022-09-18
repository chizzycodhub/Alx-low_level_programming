#include <stdio.h>

/**
 * main - Prints alphabeths in lowercase and then in uppercase
 *
 * Return: 0 on success
 */
int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
