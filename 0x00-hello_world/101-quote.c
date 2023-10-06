#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: printing program C function
 *write(int fd.const void *buf.size_t count)
 * Return: Always 1 (error)
*/
int main(void)
{
	char jih[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, jih, 59);
	return (1);
}
