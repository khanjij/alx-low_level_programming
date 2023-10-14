#include"main.h"
#include<stdio.h>

/**
 * _isupper - define if character uppercase
 *
 * @c: character input function
 *
 * Return: 1 if c uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
