#include"main.h"

/**
 * _isalpha - check for letter character
 *
 * @c: character to check
 *
 * Return: 1 if letter alpha is C otherwise always 0
*/

int _isalpha(int c)
{
	if (c <= 65 && c >= 90 || c <= 97 && c >= 122)
		return (1);
	else
		return (0);
}
