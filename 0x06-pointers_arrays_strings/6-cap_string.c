#include <stdio.h>
#include "main.h"

/**
 * isLower - determine whether ascii is lower
 * @c: character
 * Return: 1 if true, 0 if false
 */
int isLower(char c)
{
return (c >= 'a' && c <= 'z');
}

/**
 * isDelimiter - determine whether ascii is delimiter
 * @c: character
 * Return: 1 if true, 0 if false
 */
int isDelimiter(char c)
{
char delimiter[] = " \t\n,;.!?\"(){} ";

for (int i = 0; i < 13; i++)
{
if (c == delimiter[i])
return (1);
}
return (0);
}

/**
 * cap_string - capitalize all words of a string
 * @str: input string
 * Return: string with capitalized words
 */
char *cap_string(char *str)
{
char *ptr = str;
int foundDelimiter = 1;

while (*str != '\0')
{
if (isDelimiter(*str))
foundDelimiter = 1;
else if (isLower(*str) && foundDelimiter)
{
*str = *str - ('a' - 'A');
foundDelimiter = 0;
}
else
foundDelimiter = 0;

str++;
}
return (ptr);
}
