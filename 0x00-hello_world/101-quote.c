#include <sys/types.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (sucess)
 */
int main(void)
{
	char *buf = "and that piece of art is useful\" - Dora korpar, 2015-10-19\n";
	size_t nbytes = strlen(buf);
	int fd = 1;

	write(fd, buf, nbytes);
	return (1);
}
