#include <stdio.h>

/**
 * main - Prints alphabeth in lowercase except q and e using putchar
 *
 * Return: 0 on success
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
