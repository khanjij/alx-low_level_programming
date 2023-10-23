#include"main.h"

/**
 * _strchr - function locates a character in  a string
 * @c: character to search
 * @s: pointer string caracter
 * Return: pointer to 1st occurence true or null false
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p = &s[0];

for (i = 0; ; i++)
{
	if (s[i] == c)
	{
	p = p + i;
		return (p);
	}
}
	return (NULL);
}
