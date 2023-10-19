#include"main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13
 * @str: The input string
 *
 * Return: Pointer to the resulting string
 */
char *rot13(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
{
char base = (*ptr >= 'a' && *ptr <= 'z') ? 'a' : 'A';
*ptr = ((*ptr - base + 13) % 26) + base;
}
ptr++;
}

return (str);
}
