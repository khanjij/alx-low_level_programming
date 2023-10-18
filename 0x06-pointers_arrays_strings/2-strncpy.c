#include"main.h"
#include<stdio.h>

/**
 *_strncpy - copy string and replace string character
 *
 * @src: string of character
 * @dest: string of character
 *
 * Return: string character
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
