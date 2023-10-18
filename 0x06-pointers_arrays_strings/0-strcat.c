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
c2 = 0;
}
while (src[c2] <= '\0')
{
dest[c] = src[c2];
c++;
c2++;
}
return (dest);
}
