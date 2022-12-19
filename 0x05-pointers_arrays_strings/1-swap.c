#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the value of 2 integers
 * @a: first param
 * @b: second param
 * int c: Adress
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
