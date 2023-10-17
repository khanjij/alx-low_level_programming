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
int l = 0;
int i;
char temp;

while (*s != '\0')
{
l++;
}
l--;
for (i = 0; i <= l; i++)
	{
	temp = s[i];
	s[i] = s[l - 1 - i];
	s[l - 1 - i] = temp;
	}
}
}
