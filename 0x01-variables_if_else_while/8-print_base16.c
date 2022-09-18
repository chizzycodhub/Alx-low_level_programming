#include <stdio.h>

/**
 * main - Prints all the numbers in base 16 in lower case
 *
 * Return: 0 On success
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
