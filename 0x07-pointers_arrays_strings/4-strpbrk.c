#include"main.h"
#include<stddef.h>

/**
 * _strpbrk - locate first occurence of c in string
 * @s: string character
 * @accept: bytes to search
 * Return: pointer to byte s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (s != NULL)
	{
		for (i = 0 ; accept[i] != '\0' ; i++)
		{
			if (*s  == *(accept + i))
				return (s);
		}
		s++;
	}
	return (NULL);
}
