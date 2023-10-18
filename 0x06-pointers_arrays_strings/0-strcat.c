#include"main.h"
#include<stdio.h>

/**
 *_strcat - concatenate two string character
 *
 * @src: string of character
 * @dest: string of character
 *
 * Return: string character
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

c = 0;
while (dest[c] != '\0')
{
c++;
}
for (c2 = 0; src[c2] ; c2++)
{
dest[c] = src[c2];
c++;
}

return (dest);
}
