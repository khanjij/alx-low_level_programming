#include <stdio.h>
#include"main.h"
/**
 * isLower - determine whether ascii is lower
 * @c: character
 * Return: 1 if true ,0 if false
 */

int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determine whether ascii id delimiter
 * @c: character
 * Return: 1 if true,0 if false
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,;.!?\"\(\)\{\} ";

	for (i = 0; i < 12; i++)
	if (c == delimiter[i])
		return (1);
	else if
		return (0);
}

/**
* cap_string - capitalize all word of a string
* @str: input string
* Return: string with capitalized word
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int foundDelimit = 1;

while (*str != '\0')
{
	if (isDelimiter(*str))
		foudDelimit = 1;
	else if (isLower(*str) && foundDelimit)
	{
		*str = *str - 32;
		foundDelimit = 0;
	}
	else
		foundDelimit = 0;
	str++;
}
	return (ptr)
}
