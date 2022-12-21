#include "main.h"

/**
 * _strncat - a funtion that concatenates two strings
 * @src: first param
 * @dest : second param
 * @n: bytes to concatenate
 *
 * Return: Pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
