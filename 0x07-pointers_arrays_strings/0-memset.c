#include"main.h"

/**
 * _memset - replace n byte by b
 * @b: character
 * @n: unsigned int number of character to replace
 * @s: buffer
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
return (s);
}
