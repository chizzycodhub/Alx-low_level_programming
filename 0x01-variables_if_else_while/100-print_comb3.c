#include <stdio.h>

/**
 * main - Prints two-digit combination 0f 0-9
 *
 * Description: main prints possible different combination of two digits
 * seperated by comma followed by a space
 *
 * Return: 0 On success
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
