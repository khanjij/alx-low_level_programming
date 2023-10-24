#include "main.h"
/**
 * _strstr - function find first occur of needle in haystack
 * @needle: substring character
 * @haystack: string character
 * Return: return pointer to beginning located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (j = 0; needle[j] != '\0'; j++)
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (needle[j] == haystack[i])
				return (haystack + i);
		}
	}
	return (0);
}
