#include"main.h"
#include<stdio.h>

/**
 * _strcmp - function to coppare two string character
 *
 * @s1: character string1
 * @s2: character string2
 *
 * Return: result
 */

int _strcmp(char *s1, char *s2);
{
	int cmp = 0;

while (*s1 != '\0' && *s2 != '\0')
{
	if (*s1 != *s2)
	{
		cmp = *s1 - *s2;
		break;
	}
	s1++;
	s2++;
}
return (cmp);
}
