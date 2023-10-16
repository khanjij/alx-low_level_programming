#include"main.h"

/**
 * _strlen - function return the length of string character
 *
 * @s: string parameter input
 *
 * Return:  result length string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0' ; s++)
	len++;
	return (len);
}
