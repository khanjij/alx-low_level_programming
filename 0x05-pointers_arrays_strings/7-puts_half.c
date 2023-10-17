#include"main.h"
/**
 * puts_half - print the half ot character of string
 *
 * @str: string character
 *
 * Return: result
 */
void puts_half(char *str)
{
	int i, r, l = 0;

while (str[i] != '\0')
{
l++;
}

r = l / 2;

else if (l % 2 != 0)
{
r++;	
}

for (i = r; i <= l ; i++)
{
	_putchar(str[i]);
	}
_putchar('\n');
}

