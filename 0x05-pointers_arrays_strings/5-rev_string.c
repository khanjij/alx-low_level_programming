#include"main.h"

/**
 * rev_string - reverse string of character
 *
 * @s: the string character to reverse
 *
 * Return: result
 */

void rev_string(char *s)
{
int len = 0;
int i;

while (*s != '\0')
{
len++;
s++;
}
s--;
len--;

while (len >= 0)
{
for (i = 0; i <= len ; i++)
	{
s[i] = *s;
s--;
len--;
}
}
}
