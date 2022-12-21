#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: Pointer to array
 * @n: integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
