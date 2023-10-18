#include"main.h"
#include<stdio.h>

/**
 *_strncat - concatenate two string character with n character
 *
 * @src: string of character
 * @dest: string of character
 * @n:  number of character to copy
 * Return: string character
 */
char *_strncat(char *dest, char *src, int n)
{
int c, i;

c = 0;

while (dest[c] != '\0')
{
c++;
}
for (i = 0; i < n && src[i] != '\0' ; i++)
{
dest[c + i] = src[i];
}
dest[c + n] = '\0';

return (dest);
}
