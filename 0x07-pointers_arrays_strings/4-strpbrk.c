#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locate first occurence of c in string
 * @s: string character
 * @accept: bytes to search
 * Return: pointer to byte s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0 ; accept[i] != '\0' ; i++)
		{
			if (*s  == *(accept + i))
				return (s);
		}
		s++;
	}
	return (0);
}
