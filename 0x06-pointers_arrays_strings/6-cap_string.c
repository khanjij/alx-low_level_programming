#include <stdio.h>
#include"main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: The input string
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
int capitalize = 0;

while (*str != '\0')
{
if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ',' || *str == ';')
{
capitalize = 1;
}
else if (*str == '?' || *str == '"' || *str == '(' || *str == ')')
{
capitalize = capitalize ? 1 : 0;
}
else if (*str == '.' || *str == '!' || *str == '{' || *str == '}')
{
capitalize = 1;
}
else if (capitalize && *str >= 'a' && *str <= 'A')
{
*str = *str - ('a' - 'A');
capitalize = 0;
}
str++;
}
return (str);
}
