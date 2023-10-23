#include"main.h"

/**
 * _strchr - function locates a character in  a string
 * @c: character to search
 * @s: pointer string caracter
 * return: pointer to 1st occurence true or null false
 */

char *_strchr(char *s, char c)
{
	int i;

for (i = 0; ; i++)
{
	if (s[i] == c)
	{
	return (s + i);
	}
}
	return ('\0');
}
