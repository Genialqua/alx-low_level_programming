#include "main.h"

/**
 * _sqrt_recursion - A function that returns the square root of a number
 * @n: integer
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)

	return (-1);

	else if (n > 0)

	return (_sqrt_recursion(n + 1));
}
