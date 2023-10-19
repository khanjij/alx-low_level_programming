#include <stdio.h>
#include"main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The input string
 *
 * Return: Pointer to the resulting string
 */
char *leet(char *str)
{
char *leet = "aeotl";
char *Rep = "43071";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet[j] != '\0'; j++)
{
if (str[i] == leet[j] || str[i] == leet[j] - 32)
{
str[i] = Rep[j];
/* break;*/
}
}
}
return (str);
}
