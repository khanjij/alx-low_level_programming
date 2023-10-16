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
char temp;

while (*s != '\0')
{
len++;
s++;
}
s--;
len--;

while (i < len)
{
char temp = s[i];
s[i] = s[len];
s[len] = s[i];
len--;
i++
}
}
