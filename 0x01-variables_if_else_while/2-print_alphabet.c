#include <stdio.h>

/**
 * main - print the alphabet in lower case
 *
 * Return: 0 on success
 */
int main(void)
{
	char i;

	for  (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
