#include"main.h"

/**
 * puts2 - print every other character
 *
 * @str: string character
 *
 *Return: result
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0' ; ++i)
{
	if (i % 2 == 0)
	_putchar(srt[i]);
}
_putchar('\n');
}
