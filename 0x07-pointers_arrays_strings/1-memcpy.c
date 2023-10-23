#include"main.h"

/**
 * _memcpy - copy n bytes memory src to dest
 * @src: pointer to character
 * @dest: area memory
 * @n: unsigned int
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
