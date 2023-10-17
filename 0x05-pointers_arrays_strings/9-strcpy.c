#include"main.h"

/**
 * *_strcpy - copie string character to dest
 *
 * @src: char character string
 * @dest: char type string
 *
 * Description: copy the src character to dest
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
