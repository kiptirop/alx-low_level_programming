#include "main.h"

/**
 * main - prints 10 times the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= "z"; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
