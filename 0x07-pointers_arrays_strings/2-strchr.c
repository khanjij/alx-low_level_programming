#include"main.h"
#include<stddef.h>
/**
 * _strchr - function locates a character in  a string
 * @c: character to search
 * @s: pointer string caracter
 * Return: pointer to 1st occurence true or null false
 */

char *_strchr(char *s, char c)
{
	if (*s == '\0' | s == NULL)
	{
		s = NULL;
	}
while (*s != '\0')
{
	if (*s == c)
		break;
	s++;
}
	if (*s == '\0')
		s = NULL;
return (s);
}
