#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (sucess)
 */
int main(void)
{
	write(STDOUT_FILENO, " and that pieces of art is useful\" - Dora korpa, 2015-10-19\n", 60);
	return (1);
}
