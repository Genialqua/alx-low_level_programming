#include "main.h"

/**
 * _abs - To compute the absolute value of an integer
 * @n: n is an integer
 * Return: integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n * ((n > 0) - (n < 0)));
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
