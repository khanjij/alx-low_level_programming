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
int i = 0;

while (s[len] != '\0')
{
len++;
}
len--;

while (i < len)
{
char temp = s[i];
s[i] = s[len];
s[len] = temp;
i++;
len--;
}
}
