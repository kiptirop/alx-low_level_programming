#include "main.h"
#include <stdio.h>

/**
 * _strcat - Function that concatanates two strings
 * @dest: first string
 * @src: second string
 * Return: Pointer
 */

char *_strcat(char *dest, char *src)
{
	int length, x;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (x = 0; src[x] != '\0'; x++, length++)
	{
		dest[length] = src[x];
	}

	dest[length] = '\0';
	return (dest);
}
