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
int l ;
int i;
char temp;

for (l = 0; s[l] != '\0' ; ++l)
{
	for (i = 0; i < (l / 2) + 1 ; i++)
	{
	temp = s[i];
	s[i] = s[l - 1 - i];
	s[l - 1 - i] = temp;
	}
}
}
