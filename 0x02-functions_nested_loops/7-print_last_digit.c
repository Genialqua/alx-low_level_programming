#include "main.h"

/**
 * print_last_digit - A program that checks for
 * last digit on numbers
 * @n: The number to check
 *
 * Return: 1 for letters 0 for others
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
