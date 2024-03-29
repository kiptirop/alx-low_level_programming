#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @a: 1st int
 * @b: 2nd int
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two integers
 * @a: 1st int
 * @b: 2nd int
 * Return: diff of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: 1st int
 * @b: 2nd int
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of 2 integers
 * @a: 1st int
 * @b: 2nd int
 * Return: result of the div of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the remainder of div of 2 integers
 * @a: 1st int
 * @b: 2nd int
 * Return: remainder of the div
 */

int op_mod(int a, int b)
{
	return (a % b);
}
